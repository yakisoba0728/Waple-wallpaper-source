// Function: FUN_1400822e0
// Addr: 1400822e0
// Size: 198 bytes


void FUN_1400822e0(char *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  ConnectNamedPipe(*(HANDLE *)(param_1 + 0x10),(LPOVERLAPPED)0x0);
  if (*param_1 != '\0') {
    ConnectNamedPipe(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)0x0);
    if (*param_1 != '\0') {
      puVar1 = (undefined8 *)FUN_14028af20(0x10);
      puVar1[1] = FUN_140082890;
      *puVar1 = param_1;
      lVar2 = FUN_1402ca17c(0,0,FUN_140082eb0,puVar1,0,&local_10);
      if (lVar2 == 0) {
        local_10 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      if (*(int *)(param_1 + 0x78) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140015110();
      }
      *(undefined4 *)(param_1 + 0x78) = local_10;
      *(undefined4 *)(param_1 + 0x7c) = local_c;
      *(longlong *)(param_1 + 0x70) = lVar2;
      if (*param_1 != '\0') {
        FUN_1400823b0(param_1);
        return;
      }
    }
  }
  return;
}

