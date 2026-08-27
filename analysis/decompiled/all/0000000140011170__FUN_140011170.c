// Function: FUN_140011170
// Addr: 140011170
// Size: 159 bytes


undefined8 FUN_140011170(undefined8 *param_1)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  
  BVar2 = ReadFile(*(HANDLE *)param_1[2],(LPVOID)param_1[3],0x400,(LPDWORD)param_1[4],
                   (LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    *(undefined1 *)param_1[3] = 0;
  }
  lVar1 = param_1[1];
  iVar3 = FUN_140290d80(lVar1);
  if (iVar3 == 0) {
    if (*(int *)(lVar1 + 0x4c) != 0x7fffffff) {
      FUN_140290ed0(*param_1);
      FUN_140290ea0(lVar1);
      FUN_140292030();
      thunk_FUN_14028af80(param_1,0x28);
      return 0;
    }
    *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(5);
}

