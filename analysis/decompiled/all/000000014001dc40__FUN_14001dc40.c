// Function: FUN_14001dc40
// Addr: 14001dc40
// Size: 151 bytes


void FUN_14001dc40(undefined8 param_1)

{
  undefined *_Str;
  undefined8 uVar1;
  size_t sVar2;
  undefined1 local_38 [48];
  
  FUN_1400666c0();
  FUN_14006a490(&DAT_1404e52e0,param_1);
  _Str = PTR_s_wallpaperconfig_1404df5a0;
  uVar1 = FUN_140086de0(&DAT_1404df5e8,"general","");
  sVar2 = strlen(_Str);
  uVar1 = FUN_140086de0(uVar1,_Str,_Str + sVar2);
  FUN_140085520(uVar1,param_1);
  FUN_140085090(local_38,&DAT_1404e6378);
  FUN_140019f60(local_38);
  return;
}

