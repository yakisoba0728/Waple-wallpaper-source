// Function: FUN_14018ba00
// Addr: 14018ba00
// Size: 432 bytes


undefined8 FUN_14018ba00(longlong param_1,char *param_2)

{
  code *pcVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  longlong local_58 [4];
  undefined1 local_38 [8];
  uint local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  puVar7 = auStack_78;
  puVar8 = auStack_78;
  if (0x3fff < (ulonglong)(*(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110))) {
    return 0;
  }
  uVar4 = 0;
  local_30 = (local_30 >> 8 & 0xfffffe) << 8;
  local_18 = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  sVar3 = strlen(param_2);
  FUN_140017480(local_58,param_2,sVar3);
  cVar2 = FUN_140017840(local_58,local_38,0);
  if ((ulonglong)local_58[3] < 0x10) {
LAB_14018bad0:
    if (cVar2 == '\0') goto LAB_14018baf2;
  }
  else {
    uVar6 = local_58[3] + 1;
    lVar5 = local_58[0];
    if (uVar6 < 0x1000) {
LAB_14018bacb:
      thunk_FUN_14028af80(lVar5,uVar6);
      goto LAB_14018bad0;
    }
    lVar5 = *(longlong *)(local_58[0] + -8);
    if ((local_58[0] - lVar5) - 8U < 0x20) {
      uVar6 = local_58[3] + 0x28;
      goto LAB_14018bacb;
    }
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar7 = auStack_70;
  }
  *(undefined8 *)(puVar7 + -8) = 0x14018baef;
  uVar4 = FUN_14018ff60(param_1 + -0x48,puVar7 + 0x40);
  puVar8 = puVar7;
LAB_14018baf2:
  switch(puVar8[0x48]) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((*(uint *)(puVar8 + 0x48) >> 8 & 1) != 0) {
      *(undefined8 *)(puVar8 + -8) = 0x14018bb25;
      thunk_FUN_1402d9040(*(undefined8 *)(puVar8 + 0x40));
    }
    break;
  case 6:
  case 7:
    lVar5 = *(longlong *)(puVar8 + 0x40);
    if (lVar5 != 0) {
      *(undefined8 *)(puVar8 + -8) = 0x14018bb39;
      FUN_140088e40(lVar5);
      *(undefined8 *)(puVar8 + -8) = 0x14018bb46;
      thunk_FUN_14028af80(lVar5,0x10);
    }
    break;
  default:
    *(undefined8 *)(puVar8 + -8) = 0x14018bb61;
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  lVar5 = *(longlong *)(puVar8 + 0x50);
  *(undefined8 *)(puVar8 + 0x40) = 0;
  if (lVar5 != 0) {
    *(undefined8 *)(puVar8 + -8) = 0x14018bb79;
    FUN_140017240(lVar5 + 0x40);
    *(undefined8 *)(puVar8 + -8) = 0x14018bb82;
    FUN_140017240(lVar5 + 0x20);
    *(undefined8 *)(puVar8 + -8) = 0x14018bb8a;
    FUN_140017240(lVar5);
    *(undefined8 *)(puVar8 + -8) = 0x14018bb97;
    thunk_FUN_14028af80(lVar5,0x60);
  }
  return uVar4;
}

