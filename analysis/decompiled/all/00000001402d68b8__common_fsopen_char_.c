// Function: common_fsopen<char>
// Addr: 1402d68b8
// Size: 5 bytes


_iobuf * __cdecl common_fsopen<char>(char *param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  _iobuf *p_Var2;
  longlong lStackX_8;
  
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
    FUN_1402cad8c();
  }
  else if (*param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
  }
  else {
    FUN_1402ddbf4(&lStackX_8);
    if (lStackX_8 != 0) {
      p_Var2 = (_iobuf *)FUN_1402dd69c(param_1,param_2,param_3,lStackX_8,0);
      if (p_Var2 == (_iobuf *)0x0) {
        __acrt_stdio_free_stream(lStackX_8);
      }
      FUN_1402c9b30(lStackX_8);
      return p_Var2;
    }
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x18;
  }
  return (_iobuf *)0x0;
}

