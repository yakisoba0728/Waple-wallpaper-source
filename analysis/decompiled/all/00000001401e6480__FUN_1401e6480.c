// Function: FUN_1401e6480
// Addr: 1401e6480
// Size: 637 bytes


/* WARNING: Removing unreachable block (ram,0x0001401e6638) */
/* WARNING: Removing unreachable block (ram,0x0001401e668c) */

undefined8 FUN_1401e6480(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined8 unaff_R13;
  bool bVar15;
  ulonglong local_b0 [8];
  ulonglong *local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  longlong local_50;
  
  if ((char)param_1[1] == '\x06') {
    puVar3 = (undefined8 *)*param_1;
    if (puVar3 == (undefined8 *)0x0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)*puVar3;
    }
    puVar4 = (undefined8 *)*param_1;
    if (puVar4 == (undefined8 *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)*puVar4;
    }
    while( true ) {
      bVar15 = puVar4 == (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        bVar15 = plVar11 == plVar13;
      }
      if (bVar15) break;
      if ((char)plVar11[7] == '\a') {
        unaff_R13 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
        uVar14 = (undefined4)unaff_R13;
        FUN_140088430(plVar11 + 6,&local_60);
        local_70 = local_60;
        local_68 = local_60;
        if (local_60 != local_58) {
          uVar10 = local_60[2];
          local_b0[0] = 0;
          local_b0[1] = 0;
          local_b0[2] = 0;
          local_b0[3] = 0;
          if (0xf < local_60[3]) {
            local_60 = (ulonglong *)*local_60;
          }
          if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_1400173b0();
          }
          if (uVar10 < 0x10) {
            local_b0[3] = 0xf;
            local_b0[0] = *local_60;
            local_b0[1] = local_60[1];
            if (*(char *)(param_2 + 8) == '\a') {
              local_b0[2] = uVar10;
              uVar8 = func_0x000140087560(param_2,local_b0,uVar10 + (longlong)local_b0);
              return uVar8;
            }
            local_b0[2] = uVar10;
            uVar8 = func_0x000140087560(plVar11 + 6,local_b0,uVar10 + (longlong)local_b0);
            return uVar8;
          }
          uVar12 = uVar10 | 0xf;
          if (uVar12 < 0x8000000000000000) {
            if (uVar12 < 0x16) {
              uVar12 = 0x16;
            }
            uVar1 = uVar12 + 1;
            if (uVar1 == 0) {
              local_b0[0] = uVar1;
              local_b0[2] = uVar10;
              local_b0[3] = uVar12;
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(0,local_60,uVar10 + 1,param_4,uVar14);
            }
            if (uVar1 < 0x1000) {
              uVar8 = func_0x00014028aff0(uVar1);
              return uVar8;
            }
            uVar12 = uVar12 + 0x28;
            if (uVar12 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_140017440();
            }
          }
          else {
            uVar12 = 0x8000000000000027;
          }
          uVar8 = func_0x00014028aff0(uVar12);
          return uVar8;
        }
        if (local_60 != (ulonglong *)0x0) {
          if (local_60 != local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_140017310(local_60);
          }
          uVar10 = local_50 - (longlong)local_60 & 0xffffffffffffffe0;
          puVar9 = local_60;
          if (0xfff < uVar10) {
            if (0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)local_60[-1]))) {
              pcVar6 = (code *)swi(0x29);
              (*pcVar6)(5);
              return 0;
            }
            uVar10 = uVar10 + 0x27;
            puVar9 = (ulonglong *)local_60[-1];
          }
          func_0x00014028b040(puVar9,uVar10);
        }
      }
      plVar5 = (longlong *)plVar11[2];
      if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar5 + 0x19);
        plVar11 = plVar5;
        while (cVar2 == '\0') {
          plVar11 = (longlong *)*plVar11;
          cVar2 = *(char *)(*plVar11 + 0x19);
        }
      }
      else {
        cVar2 = *(char *)(plVar11[1] + 0x19);
        plVar7 = (longlong *)plVar11[1];
        plVar5 = plVar11;
        while ((plVar11 = plVar7, cVar2 == '\0' && (plVar5 == (longlong *)plVar11[2]))) {
          cVar2 = *(char *)(plVar11[1] + 0x19);
          plVar7 = (longlong *)plVar11[1];
          plVar5 = plVar11;
        }
      }
    }
  }
  return 1;
}

