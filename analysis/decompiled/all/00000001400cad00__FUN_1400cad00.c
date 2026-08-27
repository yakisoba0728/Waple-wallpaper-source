// Function: FUN_1400cad00
// Addr: 1400cad00
// Size: 300 bytes


longlong FUN_1400cad00(longlong *param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *local_28;
  char local_20;
  undefined1 local_18 [16];
  
  local_20 = 0;
  local_28 = param_1 + 4;
  iVar3 = FUN_140290d80();
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)((longlong)param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  local_20 = '\x01';
  if ((param_2 != '\0') && ((char)param_1[0x17] != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_14009c000(2);
  }
  cVar2 = FUN_140293860(param_1 + 2);
  if (cVar2 != '\0') {
    uVar4 = FUN_1400cedb0(local_18,param_1 + 2);
    FUN_1400ceda0(uVar4);
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  *(undefined1 *)(param_1 + 0x17) = 1;
  if (*(char *)((longlong)param_1 + 0xc2) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&local_28);
  }
  iVar3 = *(int *)((longlong)param_1 + 0xbc);
  while (iVar3 == 0) {
    FUN_140290f10(param_1 + 0xe,local_28);
    iVar3 = *(int *)((longlong)param_1 + 0xbc);
  }
  cVar2 = FUN_140293860(param_1 + 2);
  if (cVar2 != '\0') {
    uVar4 = FUN_1400cedb0(local_18,param_1 + 2);
    FUN_1400ceda0(uVar4);
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  if (local_20 != '\0') {
    FUN_140290ea0(local_28);
  }
  return (longlong)param_1 + 0xc;
}

