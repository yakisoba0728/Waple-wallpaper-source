// Function: FUN_14017d730
// Addr: 14017d730
// Size: 637 bytes


void FUN_14017d730(longlong param_1)

{
  undefined8 *puVar1;
  HANDLE hProcess;
  code *pcVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  DWORD local_res8 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x8000000;
  puVar1 = *(undefined8 **)(param_1 + 0x1518);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar5 = *(longlong *)(param_1 + 0x3068);
  for (lVar4 = *(longlong *)(param_1 + 0x3060); lVar4 != lVar5; lVar4 = lVar4 + 0x50) {
    hProcess = *(HANDLE *)(lVar4 + 0x48);
    if (hProcess != (HANDLE)0x0) {
      BVar3 = GetExitCodeProcess(hProcess,local_res8);
      if ((BVar3 != 0) && (local_res8[0] == 0x103)) {
        TerminateProcess(hProcess,0xffffffff);
      }
      CloseHandle(hProcess);
    }
    *(undefined8 *)(lVar4 + 0x48) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x3060);
  lVar4 = *(longlong *)(param_1 + 0x3068);
  if (lVar5 != lVar4) {
    do {
      FUN_140017240(lVar5 + 0x28);
      FUN_140017240(lVar5 + 8);
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != lVar4);
    *(undefined8 *)(param_1 + 0x3068) = *(undefined8 *)(param_1 + 0x3060);
  }
  FUN_1402d3dd0(*(undefined8 *)(param_1 + 0x2c0));
  FUN_1402d3dd0(*(undefined8 *)(param_1 + 0x1450));
  FUN_14017e3e0(param_1 + 0x3060);
  FUN_14000d9e0(param_1 + 0x1ca8);
  FUN_140049340(param_1 + 0x1c98);
  FUN_1401c33e0(param_1 + 0x1a60);
  FUN_1401afe00(param_1 + 0x18a0);
  FUN_1401710e0(param_1 + 0x1708);
  FUN_14000d9e0(param_1 + 0x16d8);
  FUN_140030c70(param_1 + 0x16c8);
  FUN_14000d9e0(param_1 + 0x1688);
  FUN_140049340(param_1 + 0x1678);
  FUN_14000d9e0(param_1 + 0x1648);
  FUN_140030c70(param_1 + 0x1638);
  FUN_14000d9e0(param_1 + 0x1600);
  FUN_140030c70(param_1 + 0x15f0);
  FUN_14000d9e0(param_1 + 0x15c0);
  FUN_14017e4a0(param_1 + 0x15b0);
  FUN_14000d9e0(param_1 + 0x1578);
  FUN_14014e750(param_1 + 0x1568);
  FUN_14000d9e0(param_1 + 0x1538);
  FUN_140030c70(param_1 + 0x1528);
  FUN_14017e2d0(param_1 + 0x14e8);
  FUN_14000d9e0(param_1 + 0x1478);
  FUN_14000d9e0(param_1 + 0x1460);
  FUN_14000d9e0(param_1 + 0x1428);
  FUN_14017e360(param_1 + 0x1418);
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  if (lVar5 != 0) {
    lVar4 = lVar5;
    puVar6 = auStack_58;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x1c0) - lVar5)) &&
       (lVar4 = *(longlong *)(lVar5 + -8), puVar6 = auStack_58, 0x1f < (lVar5 - lVar4) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar4 = (*pcVar2)(5);
      puVar6 = auStack_50;
    }
    *(undefined8 *)(puVar6 + -8) = 0x14017d984;
    thunk_FUN_14028af80(lVar4);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  FUN_140031b80(param_1);
  return;
}

