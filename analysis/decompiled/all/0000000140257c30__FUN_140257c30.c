// Function: FUN_140257c30
// Addr: 140257c30
// Size: 313 bytes


void FUN_140257c30(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  float fVar21;
  
  lVar2 = param_1[0x19];
  if ((*(byte *)((longlong)param_1 + 0x594) & 2) == 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x30);
    *(undefined1 *)(lVar2 + 0x1ca) = 1;
    *(undefined8 **)(lVar2 + 0x30) = puVar3 + 8;
    puVar3[8] = *puVar3;
    puVar3[9] = puVar3[1];
    puVar3[10] = puVar3[2];
    puVar3[0xb] = puVar3[3];
    *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar3 + 4);
    *(undefined4 *)((longlong)puVar3 + 100) = *(undefined4 *)((longlong)puVar3 + 0x24);
    *(undefined4 *)(puVar3 + 0xd) = *(undefined4 *)(puVar3 + 5);
    *(undefined4 *)((longlong)puVar3 + 0x6c) = *(undefined4 *)((longlong)puVar3 + 0x2c);
    *(undefined4 *)(puVar3 + 0xe) = *(undefined4 *)(puVar3 + 6);
    *(undefined4 *)((longlong)puVar3 + 0x74) = *(undefined4 *)((longlong)puVar3 + 0x34);
    *(undefined4 *)(puVar3 + 0xf) = *(undefined4 *)(puVar3 + 7);
    *(undefined4 *)((longlong)puVar3 + 0x7c) = *(undefined4 *)((longlong)puVar3 + 0x3c);
    puVar20 = (undefined4 *)(**(code **)(*param_1 + 0x80))(param_1);
    uVar5 = puVar20[1];
    uVar6 = puVar20[2];
    uVar7 = puVar20[3];
    puVar4 = *(undefined4 **)(param_1[0x19] + 0x30);
    uVar8 = puVar20[4];
    uVar9 = puVar20[5];
    uVar10 = puVar20[6];
    uVar11 = puVar20[7];
    uVar12 = puVar20[8];
    uVar13 = puVar20[9];
    uVar14 = puVar20[10];
    uVar15 = puVar20[0xb];
    uVar16 = puVar20[0xc];
    uVar17 = puVar20[0xd];
    uVar18 = puVar20[0xe];
    uVar19 = puVar20[0xf];
    *puVar4 = *puVar20;
    puVar4[1] = uVar5;
    puVar4[2] = uVar6;
    puVar4[3] = uVar7;
    puVar4[4] = uVar8;
    puVar4[5] = uVar9;
    puVar4[6] = uVar10;
    puVar4[7] = uVar11;
    puVar4[8] = uVar12;
    puVar4[9] = uVar13;
    puVar4[10] = uVar14;
    puVar4[0xb] = uVar15;
    puVar4[0xc] = uVar16;
    puVar4[0xd] = uVar17;
    puVar4[0xe] = uVar18;
    puVar4[0xf] = uVar19;
    FUN_140155fc0(param_1[0xb7]);
    (**(code **)(*(longlong *)param_1[0xb6] + 8))();
    FUN_140157430(param_1[0xb7]);
    lVar2 = param_1[0x19];
    plVar1 = (longlong *)(lVar2 + 0x30);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar2 + 0x1ca) = 1;
    return;
  }
  fVar21 = DAT_140492704;
  if ((*(uint *)(lVar2 + 0x118) & 0x2000) != 0) {
    fVar21 = *(float *)((longlong)param_1 + 0x4dc);
  }
  (**(code **)(**(longlong **)(lVar2 + 0x1518) + 0x118))
            (*(longlong **)(lVar2 + 0x1518),fVar21 * *(float *)(param_1 + 0x9a),
             fVar21 * *(float *)((longlong)param_1 + 0x4d4),fVar21 * *(float *)(param_1 + 0x9b),
             *(undefined4 *)((longlong)param_1 + 0x33c));
                    /* WARNING: Could not recover jumptable at 0x000140257cbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x120))
            (*(longlong **)(param_1[0x19] + 0x1518),1,0);
  return;
}

