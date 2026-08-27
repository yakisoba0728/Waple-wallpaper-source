// Function: FUN_14010d170
// Addr: 14010d170
// Size: 967 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14010d170(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  byte bVar10;
  longlong *plVar11;
  size_t sVar12;
  longlong lVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte bVar16;
  ulonglong uVar17;
  undefined8 *****pppppuVar18;
  byte bVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  char *_Str;
  longlong *plVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined1 uVar26;
  bool bVar27;
  undefined8 ****local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  puVar24 = *(undefined8 **)(param_1 + 0xa8);
  iVar25 = -1000;
  puVar3 = *(undefined8 **)(param_1 + 0xb0);
  do {
    if (puVar24 == puVar3) {
      return;
    }
    plVar21 = (longlong *)0x0;
    local_90 = (local_90 >> 8 & 0xfffffe) << 8;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    FUN_14011ca00(*puVar24,&local_98);
    if ((local_90 & 0xff) == 6) {
      bVar27 = local_98 == (undefined8 *)0x0;
      if (bVar27) {
        bVar8 = true;
        plVar23 = plVar21;
      }
      else {
        plVar21 = *(longlong **)*local_98;
        bVar8 = false;
        plVar23 = (longlong *)*local_98;
      }
      while( true ) {
        _Str = (char *)0x0;
        bVar7 = bVar8;
        if (!bVar27) {
          bVar7 = plVar21 == plVar23;
        }
        if (bVar7) break;
        plVar11 = (longlong *)FUN_140086de0(plVar21 + 6,&DAT_1404748b8,&DAT_1404748bc);
        pcVar4 = (char *)*plVar11;
        if ((pcVar4 != (char *)0x0) && (_Str = pcVar4, (*(uint *)(plVar11 + 1) >> 8 & 1) != 0)) {
          _Str = pcVar4 + 4;
        }
        local_a8 = 0;
        local_a0 = 0;
        local_b8 = (undefined8 *****)0x0;
        uStack_b0 = 0;
        sVar12 = strlen(_Str);
        FUN_140017480(&local_b8,_Str,sVar12);
        local_68 = CONCAT31(local_68._1_3_,1);
        uVar22 = local_68 & 0xfffffeff;
        plVar11 = (longlong *)FUN_140086de0(plVar21 + 6,"order","");
        local_68 = (uint)plVar11[1];
        *(uint *)(plVar11 + 1) = uVar22;
        local_70 = *plVar11;
        *plVar11 = (longlong)iVar25;
        lVar13 = plVar11[2];
        plVar11[2] = 0;
        local_50 = plVar11[4];
        local_58 = plVar11[3];
        plVar11[3] = 0;
        plVar11[4] = 0;
        local_60 = lVar13;
        FUN_140086d30(&local_70);
        if (lVar13 != 0) {
          FUN_140017240(lVar13 + 0x40);
          FUN_140017240(lVar13 + 0x20);
          FUN_140017240(lVar13);
          thunk_FUN_14028af80(lVar13,0x60);
        }
        pppppuVar18 = &local_b8;
        if (0xf < local_a0) {
          pppppuVar18 = (undefined8 *****)local_b8;
        }
        lVar13 = FUN_140087490(&DAT_1404e7ed0,pppppuVar18,local_a8 + (longlong)pppppuVar18);
        if (lVar13 != 0) {
          pppppuVar18 = &local_b8;
          if (0xf < local_a0) {
            pppppuVar18 = (undefined8 *****)local_b8;
          }
          lVar13 = FUN_140087490(&DAT_1404e7ed0,pppppuVar18,local_a8 + (longlong)pppppuVar18);
          if (lVar13 == 0) {
            lVar13 = FUN_140084ac0();
          }
          uVar14 = FUN_140086de0(plVar21 + 6,"value","");
          FUN_140085520(uVar14,lVar13);
        }
        pppppuVar18 = &local_b8;
        if (0xf < local_a0) {
          pppppuVar18 = (undefined8 *****)local_b8;
        }
        uVar14 = FUN_140086de0(param_2,pppppuVar18,local_a8 + (longlong)pppppuVar18);
        FUN_140085520(uVar14,plVar21 + 6);
        if (0xf < local_a0) {
          uVar20 = local_a0 + 1;
          pppppuVar18 = (undefined8 *****)local_b8;
          if (0xfff < uVar20) {
            pppppuVar18 = (undefined8 *****)local_b8[-1];
            uVar17 = (longlong)local_b8 + (-8 - (longlong)pppppuVar18);
            uVar26 = uVar17 < 0x1f;
            if (0x1f < uVar17) {
              bVar16 = 5;
              pcVar5 = (code *)swi(0x29);
              pbVar15 = (byte *)(*pcVar5)();
              bVar6 = (bVar16 & 0x1f) % 9;
              *pbVar15 = *pbVar15 << bVar6 | (byte)(CONCAT11(uVar26,*pbVar15) >> 9 - bVar6);
              bVar19 = (byte)uVar20;
              bVar6 = *pbVar15;
              bVar10 = (byte)pbVar15;
              bVar1 = *pbVar15;
              *pbVar15 = bVar1 + bVar10 + CARRY1(local_90._3_1_,bVar19);
              bVar16 = (bVar16 & 0x1f) % 9;
              *pbVar15 = *pbVar15 << bVar16 |
                         (byte)(CONCAT11(CARRY1(bVar6,bVar10) ||
                                         CARRY1(bVar1 + bVar10,CARRY1(local_90._3_1_,bVar19)),
                                         *pbVar15) >> 9 - bVar16);
              *pbVar15 = *pbVar15 + bVar10 + CARRY1(local_90._3_1_ + bVar19,bVar19);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            uVar20 = local_a0 + 0x28;
          }
          thunk_FUN_14028af80(pppppuVar18,uVar20);
        }
        plVar11 = (longlong *)plVar21[2];
        iVar25 = iVar25 + 1;
        if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar11 + 0x19);
          plVar21 = plVar11;
          while (cVar2 == '\0') {
            plVar21 = (longlong *)*plVar21;
            cVar2 = *(char *)(*plVar21 + 0x19);
          }
        }
        else {
          cVar2 = *(char *)(plVar21[1] + 0x19);
          plVar9 = (longlong *)plVar21[1];
          plVar11 = plVar21;
          while ((plVar21 = plVar9, cVar2 == '\0' && (plVar11 == (longlong *)plVar21[2]))) {
            cVar2 = *(char *)(plVar21[1] + 0x19);
            plVar9 = (longlong *)plVar21[1];
            plVar11 = plVar21;
          }
        }
      }
      FUN_140085440(&local_98);
    }
    else {
      if ((local_90 & 0xff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x00014010d205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                  *(uint *)((ulonglong)(byte)local_90 * 4 + 0x14010d55c)))
                  (IMAGE_DOS_HEADER_140000000.e_magic +
                   *(uint *)((ulonglong)(byte)local_90 * 4 + 0x14010d55c));
        return;
      }
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      lVar13 = local_88;
      if (local_88 != 0) {
        FUN_140017240(local_88 + 0x40);
        FUN_140017240(lVar13 + 0x20);
        FUN_140017240(lVar13);
        thunk_FUN_14028af80(lVar13,0x60);
      }
    }
    puVar24 = puVar24 + 1;
  } while( true );
}

