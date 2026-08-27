// Function: FUN_1403b1190
// Addr: 1403b1190
// Size: 815 bytes


bool FUN_1403b1190(int *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong *puVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res20 [8];
  uint local_78;
  uint local_74;
  undefined4 local_70 [2];
  ulonglong *local_68;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  
  uVar8 = 0;
  local_78 = 0;
  local_74 = 0;
  uVar13 = uVar8;
  do {
    puVar12 = (ulonglong *)0x0;
    iVar10 = *(int *)(param_2 + 0x3c) + -1;
    uVar16 = (uint)uVar8;
    uVar14 = (uint)uVar13;
    puVar5 = puVar12;
    uVar7 = uVar13;
    if (-1 < iVar10) {
      do {
        uVar3 = (uint)(iVar10 + (int)puVar5) >> 1;
        uVar17 = *(uint *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar3 * 0x24);
        if (*(uint *)("tiniidemaniflosigilrgilrgilr" + uVar8 * 4) < uVar17) {
          iVar10 = uVar3 - 1;
        }
        else {
          if (*(uint *)("tiniidemaniflosigilrgilrgilr" + uVar8 * 4) <= uVar17) {
            iVar10 = *(int *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar3 * 0x24 + 0x1c);
            param_1[uVar13 + 2] = iVar10;
            if (iVar10 == 0) goto LAB_1403b1473;
            if (uVar16 < 4) {
              pbVar4 = (byte *)FUN_1403b19c0(param_2,param_3,uVar8);
            }
            else if (uVar16 == 4) {
              pbVar4 = (byte *)FUN_14036cb30(param_2,param_3,&DAT_14046f390,8);
            }
            else if (uVar16 == 5) {
              pbVar4 = (byte *)FUN_14036d940(param_2,param_3,&DAT_14046ef60,8);
            }
            else {
              if (uVar16 != 6) {
                (param_1 + uVar13 * 2 + 10)[0] = 0;
                (param_1 + uVar13 * 2 + 10)[1] = 0;
                goto LAB_1403b1473;
              }
              pbVar4 = (byte *)FUN_14036d340(param_2,param_3,&DAT_14046f378,0);
            }
            *(byte **)(param_1 + uVar13 * 2 + 10) = pbVar4;
            if (pbVar4 != (byte *)0x0) {
              uVar17 = (uint)pbVar4[4] * 0x100 + (uint)pbVar4[5];
              puVar5 = (ulonglong *)_calloc_base(1,uVar17 * 0x40 + 0x20);
              if (puVar5 != (ulonglong *)0x0) {
                puVar12 = puVar5 + 4;
                bVar1 = pbVar4[1];
                uVar14 = 0;
                local_70[0] = 0;
                local_60 = 0;
                local_58 = 0;
                bVar2 = *pbVar4;
                local_5c = -1;
                uVar16 = (uint)pbVar4[4] * 0x100 + (uint)pbVar4[5];
                local_68 = puVar12;
                if (uVar16 != 0) {
                  do {
                    if (uVar14 < (uint)pbVar4[4] * 0x100 + (uint)pbVar4[5]) {
                      pbVar6 = pbVar4 + ((ulonglong)uVar14 + 3) * 2;
                    }
                    else {
                      pbVar6 = (byte *)&DAT_14045dd10;
                    }
                    uVar3 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
                    if (uVar3 == 0) {
                      pbVar6 = (byte *)&DAT_14045dd10;
                    }
                    else {
                      pbVar6 = pbVar4 + uVar3;
                    }
                    FUN_140377740(pbVar6,local_res20,local_70,(uint)bVar2 * 0x100 + (uint)bVar1);
                    uVar14 = uVar14 + 1;
                  } while (uVar14 < uVar16);
                }
                uVar8 = 0;
                puVar15 = puVar12 + (ulonglong)uVar17 * 8;
                *puVar5 = 0;
                puVar5[1] = 0;
                puVar5[2] = 0;
                if (puVar12 != puVar15) {
                  uVar9 = 0;
                  uVar7 = uVar8;
                  uVar11 = uVar8;
                  do {
                    uVar7 = uVar7 | puVar12[5];
                    *puVar5 = uVar7;
                    uVar9 = uVar9 | puVar12[6];
                    puVar5[1] = uVar9;
                    uVar11 = uVar11 | puVar12[7];
                    puVar12 = puVar12 + 8;
                    puVar5[2] = uVar11;
                  } while (puVar12 != puVar15);
                }
                *(uint *)(puVar5 + 3) = uVar17;
                *(int *)((longlong)puVar5 + 0x1c) = local_5c;
                puVar12 = puVar5;
                iVar10 = local_5c;
                uVar14 = local_78;
                uVar16 = local_74;
                if (uVar17 != 0) {
                  do {
                    if ((int)uVar8 != iVar10) {
                      puVar5[uVar8 * 8 + 6] = puVar5[uVar8 * 8 + 5];
                      iVar10 = *(int *)((longlong)puVar5 + 0x1c);
                    }
                    uVar3 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar3;
                  } while (uVar3 < uVar17);
                }
              }
              local_78 = uVar14 + 1;
              uVar7 = (ulonglong)local_78;
              *(ulonglong **)(param_1 + uVar13 * 2 + 0x18) = puVar12;
            }
            goto LAB_1403b1473;
          }
          puVar5 = (ulonglong *)(ulonglong)(uVar3 + 1);
        }
      } while ((int)puVar5 <= iVar10);
    }
    param_1[uVar13 + 2] = 0;
LAB_1403b1473:
    local_74 = uVar16 + 1;
    uVar8 = (ulonglong)local_74;
    uVar13 = uVar7;
    if (6 < local_74) {
      *param_1 = (int)uVar7;
      *(undefined1 *)(param_1 + 1) = 1;
      return (int)uVar7 != 0;
    }
  } while( true );
}

