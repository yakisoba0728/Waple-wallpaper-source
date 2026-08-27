// Function: FUN_1403d7930
// Addr: 1403d7930
// Size: 828 bytes


void FUN_1403d7930(longlong *param_1)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  
  lVar14 = param_1[3];
  if ((*(char *)(*param_1 + 0xb4) < '\0') && ((*(uint *)(lVar14 + 0x38) & 0xfffffffd) == 4)) {
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
  }
  lVar4 = param_1[1];
  uVar11 = 1;
  lVar5 = *(longlong *)(lVar4 + 0x90);
  if (((*(undefined **)(lVar5 + 0x68) != PTR_FUN_1404df490) ||
      ((((puVar6 = *(undefined **)(lVar4 + 0x18), puVar6 != (undefined *)0x0 &&
         (puVar6 != &DAT_1404ded88)) && (cVar7 = FUN_1403d0d40(puVar6,9), cVar7 != '\0')) ||
       (*(undefined **)(lVar5 + 0x78) != PTR_FUN_1404df4a0)))) ||
     (((puVar6 != (undefined *)0x0 && (puVar6 != &DAT_1404ded88)) &&
      (cVar7 = FUN_1403d0d40(puVar6,0xb), cVar7 != '\0')))) {
    FUN_1403afa50(lVar4,lVar14,1);
  }
  lVar14 = param_1[3];
  uVar15 = 0;
  uVar3 = *(uint *)(lVar14 + 0x60);
  uVar8 = uVar15;
  if (uVar3 != 0) {
    do {
      uVar13 = (int)uVar8 + 1;
      *(undefined1 *)(*(longlong *)(lVar14 + 0x80) + 0x12 + uVar8 * 0x14) = 0;
      *(undefined2 *)(*(longlong *)(lVar14 + 0x80) + 0x10 + uVar8 * 0x14) = 0;
      uVar8 = (ulonglong)uVar13;
    } while (uVar13 < uVar3);
    lVar14 = param_1[3];
  }
  if (((*(byte *)(*param_1 + 0xb4) & 0x10) != 0) &&
     (*(int *)(*(longlong *)(*param_1 + 0x20) + 0x58) == 1)) {
    FUN_140413a30(lVar14,uVar16);
  }
  FUN_1403f1030(*param_1,param_1[1],param_1[3]);
  if (((*(byte *)(*param_1 + 0xb4) & 0x10) != 0) &&
     (*(int *)(*(longlong *)(*param_1 + 0x20) + 0x58) == 2)) {
    FUN_140413a30(param_1[3],uVar16);
  }
  lVar14 = param_1[3];
  if (((*(byte *)(lVar14 + 0xd8) & 2) != 0) && ((*(byte *)(lVar14 + 0x18) & 0xc) == 0)) {
    uVar3 = *(uint *)(lVar14 + 0x60);
    lVar4 = *(longlong *)(lVar14 + 0x70);
    lVar5 = *(longlong *)(lVar14 + 0x80);
    uVar8 = uVar15;
    uVar9 = uVar15;
    if (uVar3 != 0) {
      do {
        lVar1 = uVar8 * 0x14;
        if (((*(byte *)(lVar4 + 0x10 + uVar8 * 0x14) & 0x20) != 0) &&
           ((*(byte *)(lVar4 + 0xc + lVar1) & 0x10) == 0)) {
          *(undefined8 *)(lVar5 + lVar1) = 0;
          if ((*(uint *)(lVar14 + 0x38) & 0xfffffffe) == 4) {
            *(undefined4 *)(lVar5 + 8 + lVar1) = 0;
          }
          else {
            *(undefined4 *)(lVar5 + 0xc + lVar1) = 0;
          }
        }
        uVar13 = (int)uVar9 + 1;
        uVar8 = uVar8 + 1;
        uVar9 = (ulonglong)uVar13;
      } while (uVar13 < uVar3);
    }
  }
  FUN_1403f19b0(param_1[1],param_1[3]);
  lVar14 = param_1[1];
  lVar4 = *(longlong *)(lVar14 + 0x90);
  if ((((*(undefined **)(lVar4 + 0x68) != PTR_FUN_1404df490) ||
       (((puVar6 = *(undefined **)(lVar14 + 0x18), puVar6 != (undefined *)0x0 &&
         (puVar6 != &DAT_1404ded88)) && (cVar7 = FUN_1403d0d40(puVar6,9), cVar7 != '\0')))) ||
      (*(undefined **)(lVar4 + 0x78) != PTR_FUN_1404df4a0)) ||
     (((puVar6 != (undefined *)0x0 && (puVar6 != &DAT_1404ded88)) &&
      (cVar7 = FUN_1403d0d40(puVar6,0xb), cVar7 != '\0')))) {
    FUN_1403afa50(lVar14,param_1[3],0xffffffff);
  }
  lVar14 = *param_1;
  if ((*(byte *)(lVar14 + 0xb4) & 0x40) != 0) {
    lVar4 = param_1[3];
    lVar5 = param_1[1];
    cVar7 = FUN_1403ec530(lVar4,lVar5,"start fallback mark");
    if (cVar7 != '\0') {
      uVar3 = *(uint *)(lVar4 + 0x60);
      lVar1 = *(longlong *)(lVar4 + 0x70);
      if (1 < uVar3) {
        lVar12 = 1;
        uVar8 = uVar15;
        do {
          uVar2 = *(ushort *)(lVar1 + 0x10 + lVar12 * 0x14);
          iVar10 = (int)uVar11;
          uVar15 = uVar8;
          if ((((2 < (uVar2 & 0x1f) - 10) && ((uVar2 & 0x40) == 0)) &&
              (((uVar2 & 0x20) == 0 || ((*(byte *)(lVar1 + lVar12 * 0x14 + 0xc) & 0x10) != 0)))) &&
             (uVar15 = uVar11, 1 < (uint)(iVar10 - (int)uVar8))) {
            FUN_1403f18e0(lVar14,lVar5,lVar4,uVar8,iVar10,uVar16);
          }
          uVar11 = (ulonglong)(iVar10 + 1U);
          lVar12 = lVar12 + 1;
          uVar8 = uVar15;
        } while (iVar10 + 1U < uVar3);
      }
      if (1 < uVar3 - (int)uVar15) {
        FUN_1403f18e0(lVar14,lVar5,lVar4,uVar15,uVar3,uVar16);
      }
      FUN_1403ec530(lVar4,lVar5,"end fallback mark");
    }
  }
  return;
}

