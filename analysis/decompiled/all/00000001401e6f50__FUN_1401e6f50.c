// Function: FUN_1401e6f50
// Addr: 1401e6f50
// Size: 540 bytes


void FUN_1401e6f50(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 ***local_38 [3];
  ulonglong local_20;
  
  *(undefined1 *)(param_1 + 0x65) = 1;
  FUN_1401de470();
  if ((((*(int *)((longlong)param_1 + 0x32c) != 0) && (*(int *)((longlong)param_1 + 0x32c) != 0x1f))
      || ((*(uint *)((longlong)param_1 + 0x304) & 0x100) != 0)) ||
     ((*(uint *)(param_1[0x19] + 0x118) & 0x1800000) != 0)) {
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 0x10;
  }
  puVar2 = (undefined8 *)param_1[0x62];
  puVar12 = (undefined8 *)param_1[0x61];
  if (puVar12 != puVar2) {
    do {
      FUN_1401e6090(*puVar12,param_1[0x19]);
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar2);
    if (param_1[0x61] != param_1[0x62]) {
      param_1[0x62] = param_1[0x61];
    }
    param_1[100] = 0;
  }
  plVar6 = (longlong *)FUN_140086de0(param_2,"effects","");
  uVar10 = *(uint *)(plVar6 + 1) & 0xff;
  if (((uVar10 == 6) || (uVar10 == 7)) && ((undefined8 *)*plVar6 != (undefined8 *)0x0)) {
    bVar3 = false;
    plVar13 = (longlong *)**(undefined8 **)*plVar6;
  }
  else {
    plVar13 = (longlong *)0x0;
    bVar3 = true;
  }
  if (((uVar10 == 6) || (uVar10 == 7)) && ((undefined8 *)*plVar6 != (undefined8 *)0x0)) {
    plVar6 = *(longlong **)*plVar6;
    bVar5 = true;
  }
  else {
    plVar6 = (longlong *)0x0;
    bVar5 = false;
  }
  do {
    do {
      while( true ) {
        bVar4 = bVar5;
        if (!bVar3) {
          bVar4 = plVar13 != plVar6;
        }
        if (!bVar4) {
          *(undefined1 *)(param_1 + 0x65) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001401e7165. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x110))(param_1);
          return;
        }
        lVar7 = FUN_140086de0(plVar13 + 6,&DAT_140473b68,&DAT_140473b6c);
        if (*(char *)(lVar7 + 8) == '\x04') {
          uVar8 = FUN_140086de0(plVar13 + 6,&DAT_140473b68,&DAT_140473b6c);
          FUN_140085cc0(uVar8,local_38);
          ppppuVar11 = local_38;
          if (0xf < local_20) {
            ppppuVar11 = (undefined8 ****)local_38[0];
          }
          FUN_1401e7170(param_1,ppppuVar11,0xffffffff,plVar13 + 6);
          FUN_140017240(local_38);
        }
        plVar14 = (longlong *)plVar13[2];
        if (*(char *)((longlong)plVar14 + 0x19) != '\0') break;
        cVar1 = *(char *)(*plVar14 + 0x19);
        plVar13 = plVar14;
        while (cVar1 == '\0') {
          plVar13 = (longlong *)*plVar13;
          cVar1 = *(char *)(*plVar13 + 0x19);
        }
      }
      plVar14 = (longlong *)plVar13[1];
      plVar9 = plVar13;
      plVar13 = plVar14;
    } while (*(char *)((longlong)plVar14 + 0x19) != '\0');
    do {
      plVar13 = plVar14;
      if (plVar9 != (longlong *)plVar14[2]) break;
      plVar13 = (longlong *)plVar14[1];
      plVar9 = plVar14;
      plVar14 = plVar13;
    } while (*(char *)((longlong)plVar13 + 0x19) == '\0');
  } while( true );
}

