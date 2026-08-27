// Function: FUN_14003f220
// Addr: 14003f220
// Size: 1084 bytes


undefined8 FUN_14003f220(char *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [24];
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined1 local_b8 [8];
  uint local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  undefined1 local_70 [48];
  
  puVar11 = auStack_108;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    param_1 = *(char **)param_1;
  }
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  local_80 = 0;
  local_88 = param_1;
  local_78 = param_1;
  if ((*(uint *)(lVar1 + 0x1d8) & 1) == 0) {
    *(undefined8 *)(lVar1 + 400) = 0;
    *(uint *)(lVar1 + 0x1d8) = *(uint *)(lVar1 + 0x1d8) | 1;
    *(undefined8 *)(lVar1 + 0x198) = 0;
    *(undefined8 *)(lVar1 + 0x1a0) = 0;
    *(undefined8 *)(lVar1 + 0x1a8) = 0;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    *(undefined8 *)(lVar1 + 0x1b8) = 0x100;
    *(undefined4 *)(lVar1 + 0x1c0) = 0;
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    *(undefined4 *)(lVar1 + 0x1d0) = 2;
    FUN_14028b030(FUN_140424690);
  }
  local_b0 = (local_b0 >> 8 & 0xfffffe) << 8;
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8 = 0;
  lStack_c0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  lVar5 = FUN_14028af20(0x280);
  lVar4 = lStack_e0;
  lVar13 = lVar5;
  uVar14 = extraout_XMM0_Da;
  lVar3 = lStack_e0;
  for (lVar8 = local_e8; lStack_e0 = lVar3, lVar8 != lVar4; lVar8 = lVar8 + 0x28) {
    uVar14 = FUN_140085350(lVar13,lVar8);
    lVar13 = lVar13 + 0x28;
    lVar3 = lStack_e0;
  }
  lVar8 = local_e8;
  if (local_e8 == 0) {
LAB_14003f397:
    local_d8 = lVar5 + 0x280;
    puVar12 = auStack_108;
    local_e8 = lVar5;
    lStack_e0 = lVar5;
    if ((ulonglong)(lStack_c0 - lStack_d0 >> 4) < 0x10) {
      uVar9 = local_c8 - lStack_d0;
      lVar13 = FUN_14028af20(0x100);
      uVar14 = FUN_1404210f0(lVar13,lStack_d0,local_c8 - lStack_d0);
      if (lStack_d0 != 0) {
        lVar8 = lStack_d0;
        puVar11 = auStack_108;
        if ((0xfff < (lStack_c0 - lStack_d0 & 0xfffffffffffffff0U)) &&
           (lVar8 = *(longlong *)(lStack_d0 + -8), puVar11 = auStack_108,
           0x1f < (lStack_d0 - *(longlong *)(lStack_d0 + -8)) - 8U)) goto LAB_14003f420;
        goto LAB_14003f42a;
      }
      goto LAB_14003f432;
    }
  }
  else {
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x28) {
      FUN_140085440(lVar8);
    }
    uVar6 = (local_d8 - local_e8 >> 3) * 8;
    lVar8 = local_e8;
    if (uVar6 < 0x1000) {
LAB_14003f392:
      uVar14 = thunk_FUN_14028af80(lVar8,uVar6);
      goto LAB_14003f397;
    }
    uVar9 = (local_e8 - *(longlong *)(local_e8 + -8)) - 8;
    if (uVar9 < 0x20) {
      uVar6 = uVar6 + 0x27;
      lVar8 = *(longlong *)(local_e8 + -8);
      goto LAB_14003f392;
    }
LAB_14003f420:
    lVar8 = 5;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar11 = auStack_100;
LAB_14003f42a:
    *(undefined8 *)(puVar11 + -8) = 0x14003f432;
    uVar14 = thunk_FUN_14028af80(lVar8);
LAB_14003f432:
    local_c8 = (uVar9 & 0xfffffffffffffff0) + lVar13;
    lStack_c0 = lVar13 + 0x100;
    puVar12 = puVar11;
    lStack_d0 = lVar13;
  }
  *(undefined4 *)(lVar1 + 0x1c0) = 0;
  *(undefined8 *)(lVar1 + 0x1c8) = 0;
  *(undefined8 *)(puVar12 + -8) = 0x14003f466;
  FUN_14004ad80(uVar14,&local_88);
  if (*(int *)(lVar1 + 0x1c0) != 0) goto LAB_14003f4b9;
  if (*local_88 == '\0') {
    *(undefined4 *)(lVar1 + 0x1c0) = 1;
  }
  else {
    *(undefined8 *)(puVar12 + -8) = 0x14003f48e;
    uVar14 = FUN_14004aeb0(lVar1 + 400,&local_88,puVar12 + 0x20);
    if (*(int *)(lVar1 + 0x1c0) != 0) goto LAB_14003f4b9;
    *(undefined8 *)(puVar12 + -8) = 0x14003f49c;
    FUN_14004ad80(uVar14,&local_88);
    if ((*(int *)(lVar1 + 0x1c0) != 0) || (*local_88 == '\0')) goto LAB_14003f4b9;
    *(undefined4 *)(lVar1 + 0x1c0) = 2;
  }
  *(longlong *)(lVar1 + 0x1c8) = (longlong)local_88 - (longlong)local_78;
LAB_14003f4b9:
  *(undefined8 *)(lVar1 + 0x1a8) = *(undefined8 *)(lVar1 + 0x1a0);
  if (*(int *)(lVar1 + 0x1c0) == 0) {
    *(undefined8 *)(puVar12 + -8) = 0x14003f5f6;
    FUN_140085350(local_70,local_b8);
    *(undefined8 *)(puVar12 + -8) = 0x14003f602;
    FUN_140085610(param_2,local_70);
    *(undefined8 *)(puVar12 + -8) = 0x14003f60b;
    FUN_140085440(local_70);
    *(undefined8 *)(puVar12 + -8) = 0x14003f614;
    uVar14 = FUN_140085440(local_b8);
    if (lStack_d0 != 0) {
      *(undefined8 *)(puVar12 + -8) = 0x14003f62d;
      FUN_14004f360(uVar14,lStack_d0,lStack_c0 - lStack_d0 >> 4);
      lStack_d0 = 0;
      local_c8 = 0;
      lStack_c0 = 0;
    }
    uVar10 = 1;
  }
  else {
    if (param_3 != 0) {
      switch(*(undefined4 *)(lVar1 + 0x1c0)) {
      case 0:
        pcVar7 = "No error.";
        break;
      case 1:
        pcVar7 = "The document is empty.";
        break;
      case 2:
        pcVar7 = "The document root must not be followed by other values.";
        break;
      case 3:
        pcVar7 = "Invalid value.";
        break;
      case 4:
        pcVar7 = "Missing a name for object member.";
        break;
      case 5:
        pcVar7 = "Missing a colon after a name of object member.";
        break;
      case 6:
        pcVar7 = "Missing a comma or \'}\' after an object member.";
        break;
      case 7:
        pcVar7 = "Missing a comma or \']\' after an array element.";
        break;
      case 8:
        pcVar7 = "Incorrect hex digit after \\u escape in string.";
        break;
      case 9:
        pcVar7 = "The surrogate pair in string is invalid.";
        break;
      case 10:
        pcVar7 = "Invalid escape character in string.";
        break;
      case 0xb:
        pcVar7 = "Missing a closing quotation mark in string.";
        break;
      case 0xc:
        pcVar7 = "Invalid encoding in string.";
        break;
      case 0xd:
        pcVar7 = "Number too big to be stored in double.";
        break;
      case 0xe:
        pcVar7 = "Miss fraction part in number.";
        break;
      case 0xf:
        pcVar7 = "Miss exponent in number.";
        break;
      case 0x10:
        pcVar7 = "Terminate parsing due to Handler error.";
        break;
      case 0x11:
        pcVar7 = "Unspecific syntax error.";
        break;
      default:
        pcVar7 = "Unknown error.";
      }
      *(undefined8 *)(puVar12 + -8) = 0x14003f5b7;
      FUN_14000ddd0(param_3,pcVar7);
    }
    *(undefined8 *)(puVar12 + -8) = 0x14003f5c0;
    uVar14 = FUN_140085440(local_b8);
    if (lStack_d0 != 0) {
      *(undefined8 *)(puVar12 + -8) = 0x14003f5d9;
      FUN_14004f360(uVar14,lStack_d0,lStack_c0 - lStack_d0 >> 4);
      lStack_d0 = 0;
      local_c8 = 0;
      lStack_c0 = 0;
    }
    uVar10 = 0;
  }
  *(undefined8 *)(puVar12 + -8) = 0x14003f645;
  FUN_1400494d0(puVar12 + 0x20);
  return uVar10;
}

