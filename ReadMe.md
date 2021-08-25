# <div align="center"><b>NetPkg</b></div>
##### <div align="right">—— A specific language for C++ network protocol.</div>

## A simple example:
<br/>

test.pack:
```pack
private Tlv(body:pack, cmd:hex){
    hex  $cmd
    u16  $$Len(body)
    pack $body
}

@Tlv([90 03])
pack tlv_0003{
    hex  [00 00 00 00] # Wrap with '[]' can be simple to type.
    u16  $$LenNext     
    u32  $qqUin        # Means 'uint32 qqUin',qqUin is an arguement
    u32  $$TimeStamp   # $$TimeStamp is inner variable.
    
    u32  0
    bin  $$RandBin(4)

    u32 $$LenNext + 4
    str "Hello World" + $s
}

```

run command `packc test.pack -l=c++ -ns=sc`

It will generate `test.cc`:
```c++
#include <libpack>

namespace sc{
    static pack::Pack Tlv(pack::Pack body, pack::Hex hex){
        pack::Pack pack;
        pack.SetHex(hex)
        pack.SetUInt16(pack::len<pack::Pack>(body))
        pack.SetPack(body);
        return pack;
    } 
    pack::Pack tlv_9003(int32_t qqUin, std::string s){
        pack::Pack pack;
        pack.Clear();
        pack.SetHex("00 00 00 00");
        pack.SetUInt16(pack::len<uint32_t>());
        pack.SetUInt32(qqUin);
        pack.SetUInt32(time() & 0xffffffff);

        pack.SetUInt32(0);
        pack.SetBin(pack::RandBin(4));

        pack.SetUInt32(pack::len<std::string>("Hello World" + s));
        pack.SetString("Hello World" + s);
        return Tlv(pack, "90 03");
    }
}
```

## TODO
> + Python Backend and Library 

> + JavaScript Library 

> + UnPack Grmmary