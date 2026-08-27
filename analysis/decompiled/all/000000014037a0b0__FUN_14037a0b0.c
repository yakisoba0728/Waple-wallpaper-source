// Function: FUN_14037a0b0
// Addr: 14037a0b0
// Size: 3442 bytes


ulonglong FUN_14037a0b0(undefined1 *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  pbVar1 = param_1 + 1;
  uVar11 = (ulonglong)(uint)param_2[6];
  pcVar5 = "OUT-OF-RANGE";
  uVar10 = (longlong)pbVar1 - *(longlong *)(param_2 + 2);
  uVar9 = 1;
  if (uVar10 <= uVar11) {
    pcVar5 = "OK";
  }
  FUN_1402fc370("SANITIZE",pbVar1,0,1,*param_2 + 1,0,"check_point [%p] in [%p..%p] -> %s",pbVar1,
                *(longlong *)(param_2 + 2),*(undefined8 *)(param_2 + 4),pcVar5);
  if (uVar11 < uVar10) {
    return 0;
  }
  switch(*param_1) {
  case 1:
    lVar3 = *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",param_1 + 6,0);
    return (ulonglong)((ulonglong)((longlong)(param_1 + 6) - lVar3) <= uVar9);
  case 2:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 5) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 5,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_140405290(param_1,param_2);
    if (cVar4 == '\0') {
      return 0;
    }
    return 1;
  case 3:
    uVar11 = (ulonglong)(uint)param_2[6];
    uVar10 = (longlong)(param_1 + 9) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 9,0);
    if (uVar11 < uVar10) {
      return 0;
    }
    uVar11 = (ulonglong)(uint)param_2[6];
    uVar10 = (longlong)(param_1 + 5) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 5,0);
    if (uVar11 < uVar10) {
      return 0;
    }
  default:
    return uVar9 & 0xff;
  case 4:
  case 6:
    puVar8 = param_1 + 0x10;
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",puVar8);
    if (uVar9 < uVar11) {
      return 0;
    }
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE");
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    uVar6 = (uint)(byte)param_1[2] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[3];
    if (uVar6 == 0) {
      return 1;
    }
    cVar4 = FUN_1403739e0(param_2,param_1 + uVar6);
    if (cVar4 != '\0') {
      return 1;
    }
    return 0;
  case 5:
  case 7:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 0x14) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 0x14,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    puVar8 = param_1 + 0x10;
    break;
  case 8:
    puVar8 = param_1 + 0xc;
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",puVar8);
    if (uVar9 < uVar11) {
      return 0;
    }
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE");
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    uVar6 = (uint)(byte)param_1[2] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[3];
    if (uVar6 != 0) {
      cVar4 = FUN_1403739e0(param_2,param_1 + uVar6);
      if (cVar4 == '\0') {
        return 0;
      }
      return 1;
    }
    return 1;
  case 9:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 0x10) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 0x10,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    puVar8 = param_1 + 0xc;
    break;
  case 10:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 6) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 6,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    iVar7 = (uint)(byte)param_1[2] * 0x100 + (uint)*pbVar1 * 0x10000;
    bVar2 = param_1[3];
    goto LAB_14037a715;
  case 0xb:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 3) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 3,0);
    return (ulonglong)(uVar11 <= uVar9);
  case 0xc:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 7) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 7,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    uVar6 = (uint)(byte)param_1[2] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[3];
    if ((uVar6 != 0) && (cVar4 = FUN_14038bbb0(param_1 + uVar6,param_2), cVar4 == '\0')) {
      return 0;
    }
    cVar4 = FUN_1404094a0(param_1 + 4,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    uVar6 = (uint)(byte)param_1[5] * 0x100 + (uint)(byte)param_1[4] * 0x10000 +
            (uint)(byte)param_1[6];
    if (uVar6 == 0) {
      return 1;
    }
    cVar4 = FUN_140373e20(param_2,param_1 + uVar6);
    goto LAB_14037a51b;
  case 0xd:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 7) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 7,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    uVar6 = (uint)(byte)param_1[2] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[3];
    if ((uVar6 != 0) && (cVar4 = FUN_14038bbb0(param_1 + uVar6,param_2), cVar4 == '\0')) {
      return 0;
    }
    cVar4 = FUN_1404094a0(param_1 + 4,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    uVar6 = (uint)(byte)param_1[5] * 0x100 + (uint)(byte)param_1[4] * 0x10000 +
            (uint)(byte)param_1[6];
    if (uVar6 == 0) {
      return 1;
    }
    cVar4 = FUN_140374570(param_2,param_1 + uVar6);
    goto LAB_14037a51b;
  case 0xe:
    puVar8 = param_1 + 8;
    goto LAB_14037a950;
  case 0xf:
    puVar8 = param_1 + 0xc;
LAB_14037a950:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404050b0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x10:
    puVar8 = param_1 + 8;
    goto LAB_14037a9c1;
  case 0x11:
    puVar8 = param_1 + 0xc;
LAB_14037a9c1:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404050b0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x12:
    puVar8 = param_1 + 0xc;
    goto LAB_14037aa32;
  case 0x13:
    puVar8 = param_1 + 0x10;
LAB_14037aa32:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404051a0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x14:
    puVar8 = param_1 + 6;
    goto LAB_14037aaa3;
  case 0x15:
    puVar8 = param_1 + 10;
LAB_14037aaa3:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_140404ed0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x16:
    puVar8 = param_1 + 10;
    goto LAB_14037ab14;
  case 0x17:
    puVar8 = param_1 + 0xe;
LAB_14037ab14:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_140404fc0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x18:
    puVar8 = param_1 + 6;
    goto LAB_14037ab85;
  case 0x19:
    puVar8 = param_1 + 10;
LAB_14037ab85:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_140404ed0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x1a:
    puVar8 = param_1 + 10;
    goto LAB_14037abf6;
  case 0x1b:
    puVar8 = param_1 + 0xe;
LAB_14037abf6:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_140404fc0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x1c:
    puVar8 = param_1 + 8;
    goto LAB_14037ac67;
  case 0x1d:
    puVar8 = param_1 + 0xc;
LAB_14037ac67:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404050b0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x1e:
    puVar8 = param_1 + 0xc;
    goto LAB_14037acd8;
  case 0x1f:
    puVar8 = param_1 + 0x10;
LAB_14037acd8:
    uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
    uVar9 = (ulonglong)(uint)param_2[6];
    FUN_1402fc370("SANITIZE",puVar8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    cVar4 = FUN_1404051a0(param_1,param_2);
    goto LAB_14037a51b;
  case 0x20:
    uVar9 = (ulonglong)(uint)param_2[6];
    uVar11 = (longlong)(param_1 + 8) - *(longlong *)(param_2 + 2);
    FUN_1402fc370("SANITIZE",param_1 + 8,0);
    if (uVar9 < uVar11) {
      return 0;
    }
    uVar6 = param_2[7];
    if (((int)uVar6 < 0) || (uVar6 < 9)) {
      param_2[7] = -1;
      return 0;
    }
    param_2[7] = uVar6 - 8;
    cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    uVar6 = (uint)(byte)param_1[2] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[3];
    if ((uVar6 != 0) && (cVar4 = FUN_14038bbb0(param_1 + uVar6,param_2), cVar4 == '\0')) {
      return 0;
    }
    cVar4 = FUN_1404094a0(param_1 + 5,param_2,param_1);
    if (cVar4 == '\0') {
      return 0;
    }
    iVar7 = (uint)(byte)param_1[6] * 0x100 + (uint)(byte)param_1[5] * 0x10000;
    bVar2 = param_1[7];
LAB_14037a715:
    if (iVar7 + (uint)bVar2 == 0) {
      return 1;
    }
    cVar4 = FUN_14038bbb0(param_1 + (iVar7 + (uint)bVar2),param_2);
    goto LAB_14037a51b;
  }
  uVar11 = (longlong)puVar8 - *(longlong *)(param_2 + 2);
  uVar9 = (ulonglong)(uint)param_2[6];
  FUN_1402fc370("SANITIZE",puVar8,0);
  if (uVar9 < uVar11) {
    return 0;
  }
  cVar4 = FUN_1404094a0(pbVar1,param_2,param_1);
  if (cVar4 == '\0') {
    return 0;
  }
  uVar6 = (uint)(byte)param_1[2] * 0x100 + (uint)*pbVar1 * 0x10000 + (uint)(byte)param_1[3];
  if (uVar6 == 0) {
    return 1;
  }
  cVar4 = FUN_140373aa0(param_2,param_1 + uVar6);
LAB_14037a51b:
  if (cVar4 == '\0') {
    return 0;
  }
  return 1;
}

