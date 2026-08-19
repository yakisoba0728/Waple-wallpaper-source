// Function: FUN_1400cadd0
// Addr: 1400cadd0
// Size: 6 bytes


longlong FUN_1400cadd0(longlong *param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plStack_28;
  char cStack_20;
  undefined1 auStack_18 [16];
  
  cStack_20 = 0;
  plStack_28 = param_1 + 4;
  iVar3 = func_0x000140290e50();
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)((longlong)param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  cStack_20 = '\x01';
  if ((param_2 != '\0') && ((char)param_1[0x17] != '\0')) {
    func_0x00014009c0d0(2);
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  cVar2 = func_0x000140293930(param_1 + 2);
  if (cVar2 != '\0') {
    uVar4 = FUN_1400cee80(auStack_18,param_1 + 2);
    FUN_1400cee70(uVar4);
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  *(undefined1 *)(param_1 + 0x17) = 1;
  if (*(char *)((longlong)param_1 + 0xc2) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc2) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,&plStack_28);
  }
  iVar3 = *(int *)((longlong)param_1 + 0xbc);
  while (iVar3 == 0) {
    FUN_140290fe0(param_1 + 0xe,plStack_28);
    iVar3 = *(int *)((longlong)param_1 + 0xbc);
  }
  cVar2 = func_0x000140293930(param_1 + 2);
  if (cVar2 != '\0') {
    uVar4 = FUN_1400cee80(auStack_18,param_1 + 2);
    FUN_1400cee70(uVar4);
    pcVar1 = (code *)swi(3);
    lVar5 = (*pcVar1)();
    return lVar5;
  }
  if (cStack_20 != '\0') {
    FUN_140290f70(plStack_28);
  }
  return (longlong)param_1 + 0xc;
}

