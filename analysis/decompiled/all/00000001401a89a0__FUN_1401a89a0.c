// Function: FUN_1401a89a0
// Addr: 1401a89a0
// Size: 530 bytes


void FUN_1401a89a0(float param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  double dVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  double *pdVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  float fVar11;
  uint local_60;
  
  if ((char)param_2[1] == '\x06') {
    puVar2 = (undefined8 *)*param_2;
    plVar8 = (longlong *)0x0;
    plVar10 = plVar8;
    if (puVar2 != (undefined8 *)0x0) {
      plVar8 = *(longlong **)*puVar2;
      plVar10 = (longlong *)*puVar2;
    }
    while (puVar2 != (undefined8 *)0x0 && plVar8 != plVar10) {
      lVar6 = FUN_140087490(plVar8 + 6,"value","");
      if ((lVar6 != 0) &&
         (pdVar7 = (double *)FUN_140086de0(plVar8 + 6,"value",""), *(byte *)(pdVar7 + 1) - 1 < 3)) {
        local_60 = CONCAT31(local_60._1_3_,3);
        uVar9 = local_60 & 0xfffffeff;
        fVar11 = (float)FUN_140086220(pdVar7);
        local_60 = *(uint *)(pdVar7 + 1);
        *(uint *)(pdVar7 + 1) = uVar9;
        *pdVar7 = (double)(fVar11 + param_1);
        dVar3 = pdVar7[2];
        pdVar7[2] = 0.0;
        pdVar7[3] = 0.0;
        pdVar7[4] = 0.0;
        switch(local_60 & 0xff) {
        case 1:
        case 2:
        case 3:
          break;
        default:
          FID_conflict__assert
                    (L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
        }
        if (dVar3 != 0.0) {
          FUN_140017240((longlong)dVar3 + 0x40);
          FUN_140017240((longlong)dVar3 + 0x20);
          FUN_140017240(dVar3);
          thunk_FUN_14028af80(dVar3,0x60);
        }
      }
      plVar4 = (longlong *)plVar8[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar4 + 0x19);
        plVar8 = plVar4;
        while (cVar1 == '\0') {
          plVar8 = (longlong *)*plVar8;
          cVar1 = *(char *)(*plVar8 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar8[1] + 0x19);
        plVar5 = (longlong *)plVar8[1];
        plVar4 = plVar8;
        while ((plVar8 = plVar5, cVar1 == '\0' && (plVar4 == (longlong *)plVar8[2]))) {
          cVar1 = *(char *)(plVar8[1] + 0x19);
          plVar5 = (longlong *)plVar8[1];
          plVar4 = plVar8;
        }
      }
    }
  }
  return;
}

