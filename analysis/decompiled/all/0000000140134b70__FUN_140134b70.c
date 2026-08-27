// Function: FUN_140134b70
// Addr: 140134b70
// Size: 2395 bytes


/* WARNING: Removing unreachable block (ram,0x000140134c07) */
/* WARNING: Type propagation algorithm not settling */

void FUN_140134b70(char *param_1,longlong *param_2)

{
  undefined2 *puVar1;
  byte *pbVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  char cVar13;
  undefined2 uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong *puVar17;
  undefined8 uVar18;
  undefined2 *puVar19;
  size_t sVar20;
  longlong *plVar21;
  char *pcVar22;
  undefined8 *******pppppppuVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  char *pcVar26;
  longlong lVar27;
  undefined1 *puVar28;
  longlong *plVar29;
  longlong *plVar30;
  longlong lVar31;
  int iVar32;
  undefined8 *******pppppppuVar33;
  int local_res20;
  int iStackX_24;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined8 local_118;
  undefined8 *******local_108 [2];
  longlong local_f8;
  ulonglong local_f0;
  undefined8 *******local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong *local_c8 [2];
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 local_68 [16];
  longlong local_58 [3];
  
  puVar28 = auStack_138;
  FUN_140136280(param_1 + 0x20);
  lVar16 = *(longlong *)(param_1 + 0x68);
  lVar27 = *(longlong *)(param_1 + 0x60);
  if (lVar27 != lVar16) {
    do {
      FUN_140017240(lVar27 + 0x28);
      FUN_140016770(lVar27 + 8);
      lVar27 = lVar27 + 0x48;
    } while (lVar27 != lVar16);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  }
  FUN_14007ff60(param_1 + 0xb8);
  FUN_140135e80(param_1 + 0x150);
  param_1[0x18] = '\0';
  if ((*(uint *)(param_2 + 1) & 0xff) != 6) {
    return;
  }
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 == (undefined8 *)0x0) {
    plVar30 = (longlong *)0x0;
  }
  else {
    plVar30 = *(longlong **)*puVar4;
  }
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 == (undefined8 *)0x0) {
    plVar29 = (longlong *)0x0;
  }
  else {
    plVar29 = (longlong *)*puVar5;
  }
  do {
    bVar10 = puVar5 == (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar10 = plVar30 == plVar29;
    }
    pcVar26 = param_1;
    if (bVar10) goto LAB_1401354a1;
    lVar16 = FUN_140086de0(plVar30 + 6,"executable","");
    puVar17 = (ulonglong *)FUN_140086de0(plVar30 + 6,"condition","");
    local_c8[0] = (ulonglong *)FUN_140086de0(plVar30 + 6,"action","");
    if (((*(char *)(lVar16 + 8) == '\x04') && ((char)puVar17[1] == '\x04')) &&
       ((char)local_c8[0][1] == '\x04')) {
      uVar18 = FUN_140085cc0(lVar16,&local_e8);
      FUN_140005880(local_108,uVar18);
      if (0xf < local_d0) {
        uVar24 = local_d0 + 1;
        pppppppuVar33 = local_e8;
        if (uVar24 < 0x1000) {
LAB_140134d1e:
          thunk_FUN_14028af80(pppppppuVar33,uVar24);
          goto LAB_140134d23;
        }
        pppppppuVar33 = (undefined8 *******)local_e8[-1];
        if ((ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar33)) < 0x20) {
          uVar24 = local_d0 + 0x28;
          goto LAB_140134d1e;
        }
LAB_14013549a:
        pcVar9 = (code *)swi(0x29);
        (*pcVar9)(5);
        puVar28 = auStack_130;
LAB_1401354a1:
        *(undefined8 *)(puVar28 + -8) = 0x1401354ab;
        FUN_1401354d0(pcVar26,1);
        return;
      }
LAB_140134d23:
      pppppppuVar33 = local_108;
      if (7 < local_f0) {
        pppppppuVar33 = local_108[0];
      }
      pppppppuVar23 = (undefined8 *******)((longlong)pppppppuVar33 + local_f8 * 2);
      pppppppuVar3 = pppppppuVar33;
      for (; pppppppuVar33 != pppppppuVar23;
          pppppppuVar33 = (undefined8 *******)((longlong)pppppppuVar33 + 2)) {
        uVar14 = FUN_1402d5b48(*(undefined2 *)pppppppuVar33);
        *(undefined2 *)pppppppuVar3 = uVar14;
        pppppppuVar3 = (undefined8 *******)((longlong)pppppppuVar3 + 2);
      }
      pppppppuVar33 = local_108;
      if (7 < local_f0) {
        pppppppuVar33 = local_108[0];
      }
      if (local_f8 == 0) {
LAB_140134de7:
        lVar16 = local_f8;
        if (local_f0 - local_f8 < 4) {
          local_118 = 4;
          FUN_140016310(local_108,4,(char)param_1,L".exe");
        }
        else {
          pppppppuVar33 = local_108;
          if (7 < local_f0) {
            pppppppuVar33 = local_108[0];
          }
          lVar27 = local_f8 * 2;
          local_f8 = local_f8 + 4;
          *(undefined8 *)((longlong)pppppppuVar33 + lVar27) = 0x6500780065002e;
          *(undefined2 *)((longlong)pppppppuVar33 + lVar16 * 2 + 8) = 0;
        }
      }
      else {
        lVar16 = -1;
        if (local_f8 + -1 != -1) {
          lVar16 = local_f8 + -1;
        }
        puVar1 = (undefined2 *)((longlong)pppppppuVar33 + (lVar16 + 1) * 2);
        puVar19 = (undefined2 *)thunk_FUN_14028d450(pppppppuVar33,puVar1,0x2e);
        if ((puVar19 == puVar1) || ((longlong)puVar19 - (longlong)pppppppuVar33 >> 1 == -1))
        goto LAB_140134de7;
      }
      puVar11 = local_c8[0];
      pcVar26 = (char *)0x0;
      pcVar6 = (char *)*local_c8[0];
      pcVar22 = pcVar26;
      if ((pcVar6 != (char *)0x0) && (pcVar22 = pcVar6, ((uint)local_c8[0][1] >> 8 & 1) != 0)) {
        pcVar22 = pcVar6 + 4;
      }
      iVar15 = FUN_1402c10d0(pcVar22,"loadwallpaper");
      iVar32 = 0;
      if (iVar15 == 0) {
LAB_140134eb2:
        lVar16 = FUN_140086de0(plVar30 + 6,&DAT_140473b68,&DAT_140473b6c);
        if (*(char *)(lVar16 + 8) != '\x04') {
          if (7 < local_f0) {
            uVar24 = local_f0 * 2 + 2;
            pppppppuVar33 = local_108[0];
            if (0xfff < uVar24) {
              pppppppuVar33 = (undefined8 *******)local_108[0][-1];
              if (0x1f < (ulonglong)((longlong)local_108[0] + (-8 - (longlong)pppppppuVar33)))
              goto LAB_14013549a;
              uVar24 = local_f0 * 2 + 0x29;
            }
            thunk_FUN_14028af80(pppppppuVar33,uVar24);
          }
          goto LAB_140134f20;
        }
        pcVar6 = (char *)*puVar17;
        local_a0 = 0;
        local_98 = 7;
        local_80 = 0;
        local_78 = 0xf;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_88 = 0;
        local_90 = 0;
        pcVar22 = pcVar26;
        if ((pcVar6 != (char *)0x0) && (pcVar22 = pcVar6, ((uint)puVar17[1] >> 8 & 1) != 0)) {
          pcVar22 = pcVar6 + 4;
        }
        local_b8 = FUN_140134a40(pcVar22);
        pppppppuVar33 = local_108;
        if (7 < local_f0) {
          pppppppuVar33 = local_108[0];
        }
        local_b4 = iVar32;
        FUN_140016ae0(&local_b0,pppppppuVar33,local_f8);
        puVar17 = (ulonglong *)FUN_140085cc0(lVar16,&local_e8);
        if (&local_90 != puVar17) {
          if (0xf < local_78) {
            uVar25 = local_78 + 1;
            uVar24 = local_90;
            if (0xfff < uVar25) {
              uVar24 = *(ulonglong *)(local_90 - 8);
              if (0x1f < (local_90 - uVar24) - 8) goto LAB_14013549a;
              uVar25 = local_78 + 0x28;
            }
            thunk_FUN_14028af80(uVar24,uVar25);
          }
          local_90 = *puVar17;
          uStack_88 = puVar17[1];
          local_80 = puVar17[2];
          local_78 = puVar17[3];
          puVar17[2] = 0;
          puVar17[3] = 0xf;
          *(undefined1 *)puVar17 = 0;
        }
        if (0xf < local_d0) {
          uVar24 = local_d0 + 1;
          pppppppuVar33 = local_e8;
          if (0xfff < uVar24) {
            pppppppuVar33 = (undefined8 *******)local_e8[-1];
            if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)pppppppuVar33)))
            goto LAB_14013549a;
            uVar24 = local_d0 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar33,uVar24);
        }
        piVar7 = *(int **)(param_1 + 0x68);
        if (piVar7 == *(int **)(param_1 + 0x70)) {
          FUN_140137340(param_1 + 0x60,piVar7,&local_b8);
        }
        else {
          *piVar7 = local_b8;
          piVar7[1] = local_b4;
          FUN_140016600(piVar7 + 2,&local_b0);
          FUN_140016fc0(piVar7 + 10,&local_90);
          *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 0x48;
        }
        if ((param_1[0x18] == '\0') && (local_b8 != 4)) {
          cVar13 = '\0';
        }
        else {
          cVar13 = '\x01';
        }
        param_1[0x18] = cVar13;
        if (0xf < local_78) {
          uVar25 = local_78 + 1;
          uVar24 = local_90;
          if (0xfff < uVar25) {
            uVar24 = *(ulonglong *)(local_90 - 8);
            pcVar26 = param_1;
            if (0x1f < (local_90 - uVar24) - 8) goto LAB_14013549a;
            uVar25 = local_78 + 0x28;
          }
          thunk_FUN_14028af80(uVar24,uVar25);
        }
        local_80 = 0;
        local_78 = 0xf;
        local_90 = local_90 & 0xffffffffffffff00;
        FUN_140016770(&local_b0);
      }
      else {
        iVar15 = FUN_1402c10d0(pcVar22,"loadplaylist");
        if (iVar15 == 0) {
          iVar32 = 1;
          goto LAB_140134eb2;
        }
        iVar15 = FUN_1402c10d0(pcVar22,"loadprofile");
        if (iVar15 == 0) {
          iVar32 = 2;
          goto LAB_140134eb2;
        }
        pcVar6 = (char *)*puVar17;
        pcVar22 = pcVar26;
        if ((pcVar6 != (char *)0x0) && (pcVar22 = pcVar6, ((uint)puVar17[1] >> 8 & 1) != 0)) {
          pcVar22 = pcVar6 + 4;
        }
        local_res20 = FUN_140134a40(pcVar22);
        pcVar6 = (char *)*puVar11;
        pcVar22 = pcVar26;
        if ((pcVar6 != (char *)0x0) && (pcVar22 = pcVar6, ((uint)puVar11[1] >> 8 & 1) != 0)) {
          pcVar22 = pcVar6 + 4;
        }
        local_d8 = 0;
        local_d0 = 0;
        local_e8 = (undefined8 *******)0x0;
        uStack_e0 = 0;
        sVar20 = strlen(pcVar22);
        FUN_140017480(&local_e8,pcVar22,sVar20);
        uVar24 = local_d0;
        lVar16 = local_d8;
        pppppppuVar33 = local_e8;
        pppppppuVar23 = &local_e8;
        if (0xf < local_d0) {
          pppppppuVar23 = local_e8;
        }
        if ((local_d8 == 4) && (iVar15 = memcmp(pppppppuVar23,&DAT_140473b34,4), iVar15 == 0)) {
          iStackX_24 = 4;
        }
        else {
          pppppppuVar23 = &local_e8;
          if (0xf < uVar24) {
            pppppppuVar23 = pppppppuVar33;
          }
          if ((lVar16 == 8) && (iVar15 = memcmp(pppppppuVar23,"pauseall",8), iVar15 == 0)) {
            iStackX_24 = 3;
          }
          else {
            pppppppuVar23 = &local_e8;
            if (0xf < uVar24) {
              pppppppuVar23 = pppppppuVar33;
            }
            if ((lVar16 == 5) && (iVar15 = memcmp(pppppppuVar23,"pause",5), iVar15 == 0)) {
              iStackX_24 = 2;
            }
            else {
              pppppppuVar23 = &local_e8;
              if (0xf < uVar24) {
                pppppppuVar23 = pppppppuVar33;
              }
              if (lVar16 == 4) {
                iVar15 = memcmp(pppppppuVar23,&DAT_140473b44,4);
                iStackX_24 = 1;
                if (iVar15 == 0) goto LAB_140135281;
              }
              iStackX_24 = iVar32;
            }
          }
        }
LAB_140135281:
        if (0xf < uVar24) {
          uVar25 = uVar24 + 1;
          pppppppuVar23 = pppppppuVar33;
          if (0xfff < uVar25) {
            pppppppuVar23 = (undefined8 *******)pppppppuVar33[-1];
            if (0x1f < (ulonglong)((longlong)pppppppuVar33 + (-8 - (longlong)pppppppuVar23)))
            goto LAB_14013549a;
            uVar25 = uVar24 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar23,uVar25);
        }
        uVar24 = 0xcbf29ce484222325;
        pppppppuVar33 = local_108;
        if (7 < local_f0) {
          pppppppuVar33 = local_108[0];
        }
        if ((char *)(local_f8 * 2) != (char *)0x0) {
          do {
            pbVar2 = (byte *)(pcVar26 + (longlong)pppppppuVar33);
            pcVar26 = pcVar26 + 1;
            uVar24 = (uVar24 ^ *pbVar2) * 0x100000001b3;
          } while (pcVar26 < (char *)(local_f8 * 2));
        }
        lVar16 = *(longlong *)
                  (*(longlong *)(param_1 + 0x38) + 8 +
                  (uVar24 & *(ulonglong *)(param_1 + 0x50)) * 0x10);
        if (lVar16 != *(longlong *)(param_1 + 0x28)) {
          lVar27 = *(longlong *)
                    (*(longlong *)(param_1 + 0x38) +
                    (uVar24 & *(ulonglong *)(param_1 + 0x50)) * 0x10);
          lVar31 = local_f8;
          pppppppuVar33 = local_108[0];
          uVar24 = local_f0;
          while( true ) {
            plVar21 = (longlong *)(lVar16 + 0x10);
            if (7 < *(ulonglong *)(lVar16 + 0x28)) {
              plVar21 = (longlong *)*plVar21;
            }
            pppppppuVar23 = local_108;
            if (7 < uVar24) {
              pppppppuVar23 = pppppppuVar33;
            }
            if ((lVar31 == *(longlong *)(lVar16 + 0x20)) &&
               ((lVar31 == 0 ||
                (iVar15 = FUN_1400158b0(pppppppuVar23,plVar21), lVar31 = local_f8,
                pppppppuVar33 = local_108[0], uVar24 = local_f0, iVar15 == 0)))) goto LAB_140135395;
            if (lVar16 == lVar27) break;
            lVar16 = *(longlong *)(lVar16 + 8);
          }
        }
        lVar16 = 0;
LAB_140135395:
        if ((lVar16 == 0) || (lVar16 == *(longlong *)(param_1 + 0x28))) {
          local_c8[0] = (ulonglong *)CONCAT44(iStackX_24,local_res20);
          plVar21 = (longlong *)FUN_140136840(param_1 + 0x20,local_68,local_108);
          FUN_140136aa0(*plVar21 + 0x30,local_c8,1);
        }
        else {
          puVar8 = *(undefined8 **)(lVar16 + 0x38);
          if (puVar8 == *(undefined8 **)(lVar16 + 0x40)) {
            FUN_14005ffa0(lVar16 + 0x30,puVar8,&local_res20);
          }
          else {
            *puVar8 = CONCAT44(iStackX_24,local_res20);
            *(longlong *)(lVar16 + 0x38) = *(longlong *)(lVar16 + 0x38) + 8;
          }
        }
        if ((param_1[0x18] == '\0') && (local_res20 != 4)) {
          cVar13 = '\0';
        }
        else {
          cVar13 = '\x01';
        }
        param_1[0x18] = cVar13;
      }
      FUN_14007d6b0(param_1 + 0xb8,local_58,local_108);
      if (7 < local_f0) {
        uVar24 = local_f0 * 2 + 2;
        pppppppuVar33 = local_108[0];
        if (0xfff < uVar24) {
          pppppppuVar33 = (undefined8 *******)local_108[0][-1];
          pcVar26 = param_1;
          if (0x1f < (ulonglong)((longlong)local_108[0] + (-8 - (longlong)pppppppuVar33)))
          goto LAB_14013549a;
          uVar24 = local_f0 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppuVar33,uVar24);
      }
    }
LAB_140134f20:
    plVar21 = (longlong *)plVar30[2];
    if (*(char *)((longlong)plVar21 + 0x19) == '\0') {
      cVar13 = *(char *)(*plVar21 + 0x19);
      plVar30 = plVar21;
      while (cVar13 == '\0') {
        plVar30 = (longlong *)*plVar30;
        cVar13 = *(char *)(*plVar30 + 0x19);
      }
    }
    else {
      cVar13 = *(char *)(plVar30[1] + 0x19);
      plVar12 = (longlong *)plVar30[1];
      plVar21 = plVar30;
      while ((plVar30 = plVar12, cVar13 == '\0' && (plVar21 == (longlong *)plVar30[2]))) {
        cVar13 = *(char *)(plVar30[1] + 0x19);
        plVar12 = (longlong *)plVar30[1];
        plVar21 = plVar30;
      }
    }
  } while( true );
}

