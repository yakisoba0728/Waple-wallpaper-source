// Function: FUN_1402ff660
// Addr: 1402ff660
// Size: 586 bytes


void FUN_1402ff660(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort uVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  
  puVar5 = *(undefined8 **)(param_1 + 0x30);
  puVar12 = *(ushort **)(param_1 + 0x20);
  puVar11 = puVar12 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
  puVar1 = puVar5 + *(int *)(param_1 + 0x2c);
  if (param_2 == 0) {
    uVar9 = 4;
    for (puVar4 = puVar12; puVar4 < puVar11; puVar4 = puVar4 + 0x18) {
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 8);
      *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(puVar4 + 2);
    }
  }
  else {
    uVar9 = 8;
    for (puVar4 = puVar12; puVar4 < puVar11; puVar4 = puVar4 + 0x18) {
      *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 10);
      *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(puVar4 + 4);
    }
  }
  do {
    if (puVar1 <= puVar5) {
      if (param_2 == 0) {
        if (puVar12 < puVar11) {
          do {
            *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(puVar12 + 0xc);
            puVar12 = puVar12 + 0x18;
          } while (puVar12 < puVar11);
          return;
        }
      }
      else {
        for (; puVar12 < puVar11; puVar12 = puVar12 + 0x18) {
          *(undefined4 *)(puVar12 + 10) = *(undefined4 *)(puVar12 + 0xc);
        }
      }
      return;
    }
    puVar4 = (ushort *)*puVar5;
    puVar2 = *(ushort **)(puVar4 + 0x14);
    for (puVar6 = puVar4; puVar6 <= puVar2; puVar6 = puVar6 + 0x18) {
      puVar8 = puVar6;
      if ((uVar9 & *puVar6) != 0) goto joined_r0x0001402ff753;
    }
LAB_1402ff828:
    puVar5 = puVar5 + 1;
  } while( true );
joined_r0x0001402ff753:
  puVar3 = puVar8;
  if (puVar3 < puVar2) goto LAB_1402ff760;
  goto LAB_1402ff774;
LAB_1402ff760:
  puVar8 = puVar3 + 0x18;
  if ((uVar9 & puVar3[0x18]) == 0) {
LAB_1402ff774:
    puVar7 = puVar3 + 0x18;
    puVar8 = puVar7;
    while( true ) {
      if (puVar2 < puVar8) {
        if (puVar3 == puVar6) {
          iVar10 = *(int *)(puVar6 + 0xc) - *(int *)(puVar6 + 0xe);
          if (iVar10 != 0) {
            for (; puVar4 < puVar6; puVar4 = puVar4 + 0x18) {
              *(int *)(puVar4 + 0xc) = *(int *)(puVar4 + 0xe) + iVar10;
            }
            while (puVar6 = puVar6 + 0x18, puVar6 <= puVar2) {
              *(int *)(puVar6 + 0xc) = *(int *)(puVar6 + 0xe) + iVar10;
            }
          }
        }
        else {
          if (puVar3 < puVar2) {
            FUN_140300830(puVar7,puVar2,puVar3,puVar6);
          }
          if (puVar12 < puVar6) {
            FUN_140300830(puVar4,puVar6 + -0x18,puVar3,puVar6);
          }
        }
        goto LAB_1402ff828;
      }
      if ((uVar9 & *puVar8) != 0) break;
      puVar8 = puVar8 + 0x18;
    }
    FUN_140300830(puVar7,puVar8 + -0x18,puVar3,puVar8);
  }
  goto joined_r0x0001402ff753;
}

