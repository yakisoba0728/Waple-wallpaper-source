// Function: FUN_1402197b0
// Addr: 1402197b0
// Size: 526 bytes


void FUN_1402197b0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  code *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  do {
    if (param_4 < 0x21) {
      FUN_140219cb0(param_1,param_2,param_3);
      return;
    }
    lVar1 = param_4 + -0x20;
    puVar7 = param_1 + 0x200;
    lVar9 = param_4 + -0x40;
    if (lVar1 < 0x20) {
      lVar9 = 0;
    }
    lVar11 = 0x1000;
    if (lVar1 < 0x20) {
      lVar11 = param_4 * 0x40;
    }
    puVar2 = (undefined4 *)((longlong)param_1 + lVar11);
    lVar10 = 0xfc0;
    if (lVar1 < 0x20) {
      lVar10 = param_4 * 0x40 + -0x40;
    }
    puVar8 = param_1;
    while( true ) {
      while (cVar6 = (*param_5)(puVar7,puVar8), cVar6 == '\0') {
        *param_3 = *puVar8;
        param_3[1] = puVar8[1];
        param_3[2] = puVar8[2];
        param_3[3] = puVar8[3];
        uVar3 = *(undefined8 *)(puVar8 + 8);
        uVar4 = *(undefined8 *)(puVar8 + 6);
        uVar5 = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar8 + 8) = 0;
        *(undefined8 *)(puVar8 + 6) = 0;
        *(undefined8 *)(puVar8 + 4) = 0;
        *(undefined8 *)(param_3 + 4) = uVar5;
        *(undefined8 *)(param_3 + 6) = uVar4;
        *(undefined8 *)(param_3 + 8) = uVar3;
        uVar3 = *(undefined8 *)(puVar8 + 10);
        uVar4 = *(undefined8 *)(puVar8 + 0xe);
        uVar5 = *(undefined8 *)(puVar8 + 0xc);
        *(undefined8 *)(puVar8 + 0xe) = 0;
        *(undefined8 *)(puVar8 + 0xc) = 0;
        *(undefined8 *)(puVar8 + 10) = 0;
        *(undefined8 *)(param_3 + 10) = uVar3;
        *(undefined8 *)(param_3 + 0xc) = uVar5;
        *(undefined8 *)(param_3 + 0xe) = uVar4;
        if (puVar8 == param_1 + 0x1f0) goto LAB_14021995f;
        puVar8 = puVar8 + 0x10;
        param_3 = param_3 + 0x10;
      }
      *param_3 = *puVar7;
      param_3[1] = puVar7[1];
      param_3[2] = puVar7[2];
      param_3[3] = puVar7[3];
      uVar3 = *(undefined8 *)(puVar7 + 8);
      uVar4 = *(undefined8 *)(puVar7 + 6);
      uVar5 = *(undefined8 *)(puVar7 + 4);
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(param_3 + 4) = uVar5;
      *(undefined8 *)(param_3 + 6) = uVar4;
      *(undefined8 *)(param_3 + 8) = uVar3;
      uVar3 = *(undefined8 *)(puVar7 + 0xe);
      uVar4 = *(undefined8 *)(puVar7 + 0xc);
      uVar5 = *(undefined8 *)(puVar7 + 10);
      *(undefined8 *)(puVar7 + 0xe) = 0;
      *(undefined8 *)(puVar7 + 0xc) = 0;
      *(undefined8 *)(puVar7 + 10) = 0;
      *(undefined8 *)(param_3 + 10) = uVar5;
      *(undefined8 *)(param_3 + 0xc) = uVar4;
      *(undefined8 *)(param_3 + 0xe) = uVar3;
      if (puVar7 == (undefined4 *)(lVar10 + (longlong)param_1)) break;
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + 0x10;
    }
    lVar11 = 0x800;
    puVar7 = puVar8;
LAB_14021995f:
    param_3 = (undefined4 *)FUN_140219cb0(puVar7,(longlong)param_1 + lVar11);
    param_1 = puVar2;
    param_4 = lVar9;
  } while( true );
}

