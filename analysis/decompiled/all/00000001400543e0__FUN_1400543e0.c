// Function: FUN_1400543e0
// Addr: 1400543e0
// Size: 467 bytes


void FUN_1400543e0(longlong param_1,char *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined4 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  puVar7 = auStack_78;
  local_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  sVar4 = strlen(param_2);
  FUN_140017480(&local_58,param_2,sVar4);
  cVar3 = FUN_140017840(&local_58,param_1 + 8,0);
  if (uStack_40 < 0x10) {
LAB_14005446d:
    uVar6 = uStack_50;
    if (cVar3 != '\0') {
      return;
    }
    uStack_50 = CONCAT71(uStack_50._1_7_,4);
    uStack_50._4_4_ = SUB84(uVar6,4);
    uStack_50 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50) | 0x100;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    sVar4 = strlen(param_2);
    uVar6 = sVar4 & 0xffffffff;
    puVar5 = (undefined4 *)_malloc_base(uVar6 + 5);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    *puVar5 = (int)sVar4;
    FUN_1404210f0(puVar5 + 1,param_2,uVar6);
    *(undefined1 *)((longlong)puVar5 + uVar6 + 4) = 0;
    local_58 = puVar5;
    FUN_140085610(param_1 + 8,&local_58);
    puVar5 = local_58;
    puVar8 = auStack_78;
    switch(uStack_50 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      goto switchD_1400544fb_caseD_4;
    case 6:
    case 7:
      puVar8 = auStack_78;
      if (local_58 != (undefined4 *)0x0) {
        FUN_140088e40(local_58);
        thunk_FUN_14028af80(puVar5,0x10);
        puVar8 = auStack_78;
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      puVar8 = auStack_78;
    }
  }
  else {
    uVar6 = uStack_40 + 1;
    puVar5 = local_58;
    if (uVar6 < 0x1000) {
LAB_140054468:
      thunk_FUN_14028af80(puVar5,uVar6);
      goto LAB_14005446d;
    }
    puVar5 = *(undefined4 **)(local_58 + -2);
    if ((ulonglong)((longlong)local_58 + (-8 - (longlong)puVar5)) < 0x20) {
      uVar6 = uStack_40 + 0x28;
      goto LAB_140054468;
    }
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar7 = auStack_70;
switchD_1400544fb_caseD_4:
    puVar8 = puVar7;
    if ((*(uint *)(puVar7 + 0x28) >> 8 & 1) != 0) {
      *(undefined8 *)(puVar7 + -8) = 0x140054519;
      thunk_FUN_1402d9040(*(undefined8 *)(puVar7 + 0x20));
    }
  }
  lVar1 = *(longlong *)(puVar8 + 0x30);
  if (lVar1 != 0) {
    *(undefined8 *)(puVar8 + -8) = 0x140054568;
    FUN_140017240(lVar1 + 0x40);
    *(undefined8 *)(puVar8 + -8) = 0x140054571;
    FUN_140017240(lVar1 + 0x20);
    *(undefined8 *)(puVar8 + -8) = 0x140054579;
    FUN_140017240(lVar1);
    *(undefined8 *)(puVar8 + -8) = 0x140054586;
    thunk_FUN_14028af80(lVar1,0x60);
  }
  return;
}

