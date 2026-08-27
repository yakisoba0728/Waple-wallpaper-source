// Function: FUN_1400c16d0
// Addr: 1400c16d0
// Size: 443 bytes


void FUN_1400c16d0(undefined8 *param_1)

{
  int iVar1;
  FARPROC pFVar2;
  
  *param_1 = &PTR_FUN_140485fe0;
  iVar1 = FUN_140290d80(param_1 + 0x27);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)((longlong)param_1 + 0x184) != 0x7fffffff) {
    param_1[0x167] = 0;
    if ((HMODULE)param_1[0x161] != (HMODULE)0x0) {
      pFVar2 = GetProcAddress((HMODULE)param_1[0x161],"Shutdown");
      if (pFVar2 != (FARPROC)0x0) {
        (*pFVar2)();
      }
      FreeLibrary((HMODULE)param_1[0x161]);
    }
    param_1[0x161] = 0;
    FUN_140290ea0(param_1 + 0x27);
    FUN_140017240(param_1 + 0x16d);
    FUN_14000d9e0(param_1 + 0x15a);
    FUN_140031340(param_1 + 0x158);
    FUN_1400f0bc0(param_1 + 0x127);
    FUN_140083230(param_1 + 0xcd);
    FUN_1400c15a0(param_1 + 0x9e);
    FUN_14000d9e0(param_1 + 0x98);
    FUN_1400ca4f0(param_1 + 0x96);
    FUN_14009c350(param_1 + 0x49);
    FUN_14000d9e0(param_1 + 0x44);
    FUN_140049340(param_1 + 0x42);
    FUN_14000d9e0(param_1 + 0x3c);
    FUN_140049340(param_1 + 0x3a);
    FUN_14000d9e0(param_1 + 0x34);
    FUN_140049340(param_1 + 0x32);
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
      param_1[0x1a] = 0;
    }
    (**(code **)(*(longlong *)param_1[0x25] + 0x10))();
    FUN_1402d3dd0(param_1[1]);
    FUN_140017240(param_1 + 0x21);
    if (*(int *)(param_1 + 0xf) == 0) {
      *param_1 = &PTR_FUN_1404861e0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140015110();
  }
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

