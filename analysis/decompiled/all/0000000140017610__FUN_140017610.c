// Function: FUN_140017610
// Addr: 140017610
// Size: 435 bytes


undefined8 * FUN_140017610(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  ulonglong local_88;
  char local_80 [4];
  char local_7c [2];
  char local_7a;
  undefined1 local_79;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  uint local_60;
  
  puVar9 = auStack_a8;
  *(undefined1 *)(param_2 + 2) = 0;
  *(uint *)(param_2 + 2) = *(uint *)(param_2 + 2) & 0xfffffeff;
  *param_2 = &PTR_FUN_1404755b8;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_140091ef0(param_2 + 1);
  local_80[0] = s_collectComments_1404744f8[8];
  local_80[1] = s_collectComments_1404744f8[9];
  local_80[2] = s_collectComments_1404744f8[10];
  local_80[3] = s_collectComments_1404744f8[0xb];
  local_7c[0] = s_collectComments_1404744f8[0xc];
  local_7c[1] = s_collectComments_1404744f8[0xd];
  local_7a = s_collectComments_1404744f8[0xe];
  local_60 = CONCAT31(local_60._1_3_,5);
  uVar8 = local_60 & 0xfffffeff;
  local_68 = 0;
  local_78 = 0xf;
  local_70 = 0xf;
  local_88._0_1_ = s_collectComments_1404744f8[0];
  local_88._1_1_ = s_collectComments_1404744f8[1];
  local_88._2_1_ = s_collectComments_1404744f8[2];
  local_88._3_1_ = s_collectComments_1404744f8[3];
  local_88._4_1_ = s_collectComments_1404744f8[4];
  local_88._5_1_ = s_collectComments_1404744f8[5];
  local_88._6_1_ = s_collectComments_1404744f8[6];
  local_88._7_1_ = s_collectComments_1404744f8[7];
  local_79 = 0;
  plVar5 = (longlong *)FUN_140086de0(param_2 + 1,&local_88,&local_79);
  uVar1 = *(uint *)(plVar5 + 1);
  *(uint *)(plVar5 + 1) = uVar8;
  lVar2 = *plVar5;
  *plVar5 = CONCAT71(uStack_67,local_68);
  lVar3 = plVar5[2];
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  if (local_70 < 0x10) {
LAB_14001770d:
    local_78 = 0;
    local_70 = 0xf;
    local_88 = local_88 & 0xffffffffffffff00;
    puVar10 = auStack_a8;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      goto switchD_140017736_caseD_4;
    case 6:
    case 7:
      puVar10 = auStack_a8;
      if (lVar2 != 0) {
        FUN_140088e40(lVar2);
        thunk_FUN_14028af80(lVar2,0x10);
        puVar10 = auStack_a8;
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      puVar10 = auStack_a8;
    }
  }
  else {
    uVar7 = local_70 + 1;
    uVar6 = local_88;
    if (uVar7 < 0x1000) {
LAB_140017708:
      thunk_FUN_14028af80(uVar6,uVar7);
      goto LAB_14001770d;
    }
    uVar6 = *(ulonglong *)(local_88 - 8);
    if ((local_88 - uVar6) - 8 < 0x20) {
      uVar7 = local_70 + 0x28;
      goto LAB_140017708;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar9 = auStack_a0;
switchD_140017736_caseD_4:
    puVar10 = puVar9;
    if ((uVar1 >> 8 & 1) != 0) {
      *(undefined8 *)(puVar9 + -8) = 0x140017750;
      thunk_FUN_1402d9040(lVar2);
    }
  }
  if (lVar3 != 0) {
    *(undefined8 *)(puVar10 + -8) = 0x140017795;
    FUN_140017240(lVar3 + 0x40);
    *(undefined8 *)(puVar10 + -8) = 0x14001779e;
    FUN_140017240(lVar3 + 0x20);
    *(undefined8 *)(puVar10 + -8) = 0x1400177a6;
    FUN_140017240(lVar3);
    *(undefined8 *)(puVar10 + -8) = 0x1400177b3;
    thunk_FUN_14028af80(lVar3,0x60);
  }
  return param_2;
}

