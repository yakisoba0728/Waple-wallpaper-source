// Function: FUN_140198dd0
// Addr: 140198dd0
// Size: 75 bytes


void FUN_140198dd0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  *(byte *)(param_1 + 0x468) = *(byte *)(param_1 + 0x468) & 0xfb | 2;
  if (*(byte *)(*(longlong *)(param_1 + 0xd8) + 0x1ad) < 3) {
    plVar5 = *(longlong **)(param_1 + 0x440);
    lVar6 = plVar5[1];
    plVar1 = (longlong *)(lVar6 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar6 + 0x50) = (longlong)plVar5;
    (**(code **)(*plVar5 + 0x48))();
    FUN_140156090(*(undefined8 *)(param_1 + 0x458));
    (**(code **)(**(longlong **)(param_1 + 0x448) + 8))();
    FUN_140157500(*(undefined8 *)(param_1 + 0x458));
    plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x440) + 8) + 0x50);
    *plVar1 = *plVar1 + -8;
    plVar5 = *(longlong **)(param_1 + 0x438);
    lVar6 = plVar5[1];
    plVar1 = (longlong *)(lVar6 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar6 + 0x50) = (longlong)plVar5;
    (**(code **)(*plVar5 + 0x48))();
    FUN_140156090(*(undefined8 *)(param_1 + 0x460));
    (**(code **)(**(longlong **)(param_1 + 0x448) + 8))();
    FUN_140157500(*(undefined8 *)(param_1 + 0x460));
    plVar1 = *(longlong **)(param_1 + 0x438);
    *(longlong *)(plVar1[1] + 0x50) = *(longlong *)(plVar1[1] + 0x50) + -8;
    if ((longlong *)**(longlong **)(plVar1[1] + 0x50) == (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    else {
      (**(code **)(*(longlong *)**(longlong **)(plVar1[1] + 0x50) + 0x48))();
    }
  }
  FUN_140156090(*(undefined8 *)(param_1 + 0x450));
  (**(code **)(**(longlong **)(param_1 + 0x448) + 8))();
  cVar2 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x450) + 200) + 0x12eb);
  lVar6 = *(longlong *)(param_1 + 0x450);
  while (cVar2 != '\x02') {
    lVar4 = *(longlong *)(*(longlong *)(lVar6 + 200) + 0x2e0);
    if (lVar4 == 0) goto LAB_140157577;
    *(undefined8 *)(*(longlong *)(lVar6 + 200) + 0x2e0) = 0;
    lVar6 = lVar4;
    cVar2 = *(char *)(*(longlong *)(lVar4 + 200) + 0x12eb);
  }
  uVar7 = (**(code **)(**(longlong **)(lVar6 + 0x1e0) + 0x20))();
  if ((uVar7 & 0x20) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0x150))(plVar1,0);
  }
LAB_140157577:
  *(undefined8 *)(*(longlong *)(lVar6 + 200) + 0x2e0) = 0;
  if (*(char *)(lVar6 + 0x1f0) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0x128))(plVar1,0);
  }
  if (*(char *)(lVar6 + 0x1f2) == '\x01') {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 200) + 0x1518);
    (**(code **)(*plVar1 + 200))(plVar1,1);
  }
  if (*(char *)(lVar6 + 499) == '\x01') {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0xd0))(plVar1,1);
  }
  if (*(char *)(lVar6 + 500) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0xa8))(plVar1,1);
  }
  if (*(char *)(lVar6 + 0x1f1) != '\0') {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0xd8))(plVar1,1,*(uint *)(lVar6 + 0x1f8) >> 4 & 0xffffff01);
  }
  pbVar8 = (byte *)(*(longlong *)(lVar6 + 0x1e0) + 0x14);
  bVar3 = *pbVar8;
  while (bVar3 != 0xff) {
    plVar1 = *(longlong **)(lVar6 + 0xd0 + (ulonglong)(*pbVar8 & 0xf) * 8);
    if ((*(byte *)(plVar1 + 2) & 5) != 0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,*pbVar8 & 0xf);
    }
    pbVar8 = pbVar8 + 1;
    bVar3 = *pbVar8;
  }
  return;
}

