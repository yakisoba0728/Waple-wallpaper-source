// Function: FUN_140157430
// Addr: 140157430
// Size: 383 bytes


void FUN_140157430(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 200) + 0x12eb);
  while (cVar1 != '\x02') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x2e0);
    if (lVar3 == 0) goto LAB_1401574a7;
    *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x2e0) = 0;
    param_1 = lVar3;
    cVar1 = *(char *)(*(longlong *)(lVar3 + 200) + 0x12eb);
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x20))();
  if ((uVar5 & 0x20) != 0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar4 + 0x150))(plVar4,0);
  }
LAB_1401574a7:
  *(undefined8 *)(*(longlong *)(param_1 + 200) + 0x2e0) = 0;
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar4 + 0x128))(plVar4,0);
  }
  if (*(char *)(param_1 + 0x1f2) == '\x01') {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar4 + 200))(plVar4,1);
  }
  if (*(char *)(param_1 + 499) == '\x01') {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar4 + 0xd0))(plVar4,1);
  }
  if (*(char *)(param_1 + 500) != '\0') {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar4 + 0xa8))(plVar4,1);
  }
  if (*(char *)(param_1 + 0x1f1) != '\0') {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar4 + 0xd8))(plVar4,1,*(uint *)(param_1 + 0x1f8) >> 4 & 0xffffff01);
  }
  pbVar6 = (byte *)(*(longlong *)(param_1 + 0x1e0) + 0x14);
  bVar2 = *pbVar6;
  while (bVar2 != 0xff) {
    plVar4 = *(longlong **)(param_1 + 0xd0 + (ulonglong)(*pbVar6 & 0xf) * 8);
    if ((*(byte *)(plVar4 + 2) & 5) != 0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,*pbVar6 & 0xf);
    }
    pbVar6 = pbVar6 + 1;
    bVar2 = *pbVar6;
  }
  return;
}

