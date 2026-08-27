// Function: FUN_1400a9080
// Addr: 1400a9080
// Size: 570 bytes


char * FUN_1400a9080(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  
  pcVar4 = (char *)0x0;
  puVar13 = (undefined1 *)0x0;
  puVar16 = (undefined1 *)0x0;
  if (((param_2 != (longlong *)0x0) && (lVar2 = *param_2, lVar2 != 0)) &&
     (puVar13 = (undefined1 *)(param_2[2] + lVar2), puVar16 = puVar13, (char)param_2[5] == '\0')) {
    puVar16 = (undefined1 *)(param_2[1] + lVar2);
  }
  iVar6 = *(int *)(param_1 + 0x84);
  bVar3 = true;
  if (iVar6 == 0) {
    uVar15 = *(uint *)(param_1 + 0x48);
    uVar7 = *(uint *)(param_1 + 0x4c);
    bVar9 = *(byte *)(param_1 + 0x50);
    uVar14 = *(uint *)(param_1 + 0x58);
    uVar10 = *(uint *)(param_1 + 0x34);
    goto LAB_1400a9144;
  }
  uVar15 = *(uint *)(param_1 + 0x40aad8);
  uVar8 = *(uint *)(param_1 + 0x40aadc);
  bVar9 = *(byte *)(param_1 + 0x40aae0);
  uVar14 = *(uint *)(param_1 + 0x40aae4);
  uVar10 = *(uint *)(param_1 + 0x40aae8);
  bVar11 = *(byte *)(param_1 + 0x40aaec);
  uVar12 = (ulonglong)bVar11;
  if (iVar6 == 1) goto LAB_1400a91a2;
  if (iVar6 == 2) {
    while (bVar11 = (byte)uVar12, puVar13 != puVar16) {
      *puVar13 = *(undefined1 *)(param_1 + 0x40aaf0);
      puVar13 = puVar13 + 1;
      uVar8 = uVar8 - 1;
      while (uVar8 == 0) {
        uVar10 = uVar10 - 1;
        uVar7 = 0;
        bVar9 = (byte)uVar12;
LAB_1400a9144:
        while( true ) {
          if ((uVar10 == 0) || (*(int *)(param_1 + 0x84) != 0)) {
            *(uint *)(param_1 + 0x48) = uVar15;
            *(uint *)(param_1 + 0x4c) = uVar7;
            *(byte *)(param_1 + 0x50) = bVar9;
            *(uint *)(param_1 + 0x58) = uVar14;
            if (uVar10 < 0xdbba1) {
              *(uint *)(param_1 + 0x34) = uVar10;
            }
            *(undefined4 *)(param_1 + 0x84) = 0;
            goto LAB_1400a927b;
          }
          uVar1 = *(uint *)(param_1 + 0xaaac + (ulonglong)uVar15 * 4);
          uVar8 = uVar1 & 0xff;
          uVar12 = (ulonglong)uVar8;
          uVar15 = uVar1 >> 0xc;
          if (3 < uVar7) break;
          *(ulonglong *)(param_1 + 0x40aaf0) = uVar12;
          uVar14 = uVar14 << 8 ^ *(uint *)(&DAT_14047ebc0 + (ulonglong)(uVar14 >> 0x18 ^ uVar8) * 4)
          ;
          iVar6 = 1;
          uVar8 = uVar7 + 1;
          if ((byte)uVar1 != bVar9) {
            uVar8 = 1;
          }
LAB_1400a91a2:
          bVar11 = (byte)uVar12;
          if (puVar13 == puVar16) goto LAB_1400a9216;
          *puVar13 = *(undefined1 *)(param_1 + 0x40aaf0);
          puVar13 = puVar13 + 1;
          uVar10 = uVar10 - 1;
          uVar7 = uVar8;
          bVar9 = bVar11;
        }
      }
      *(ulonglong *)(param_1 + 0x40aaf0) = (ulonglong)bVar9;
      uVar14 = uVar14 << 8 ^
               *(uint *)(&DAT_14047ebc0 + ((ulonglong)(uVar14 >> 0x18) ^ (ulonglong)bVar9) * 4);
      iVar6 = 2;
    }
LAB_1400a9216:
    pcVar4 = "$base: short write";
  }
  else {
    bVar3 = false;
  }
  *(uint *)(param_1 + 0x40aad8) = uVar15;
  *(uint *)(param_1 + 0x40aadc) = uVar8;
  *(byte *)(param_1 + 0x40aae0) = bVar9;
  iVar5 = 0;
  if (bVar3) {
    iVar5 = iVar6;
  }
  *(uint *)(param_1 + 0x40aae4) = uVar14;
  *(int *)(param_1 + 0x84) = iVar5;
  *(uint *)(param_1 + 0x40aae8) = uVar10;
  *(byte *)(param_1 + 0x40aaec) = bVar11;
LAB_1400a927b:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[2] = (longlong)puVar13 - *param_2;
  }
  return pcVar4;
}

