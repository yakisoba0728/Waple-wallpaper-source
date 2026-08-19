// Function: FUN_140085b00
// Addr: 140085b00
// Size: 432 bytes


ulonglong FUN_140085b00(double *param_1,double *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  longlong *plVar14;
  
  uVar2 = *(uint *)(param_2 + 1);
  uVar11 = *(uint *)(param_1 + 1) & 0xff;
  plVar10 = (longlong *)0x0;
  if (uVar11 != (uVar2 & 0xff)) {
    return 1;
  }
  switch(uVar11) {
  case 0:
    goto switchD_140085b54_caseD_0;
  case 1:
  case 2:
    uVar8 = CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 == *param_2);
    goto LAB_140085d34;
  case 3:
    if (*param_1 == *param_2) {
      uVar8 = 1;
      goto LAB_140085d34;
    }
    break;
  case 4:
    piVar12 = (int *)*param_1;
    if ((piVar12 == (int *)0x0) || (puVar13 = (uint *)*param_2, puVar13 == (uint *)0x0)) {
      uVar8 = (ulonglong)(piVar12 == (int *)*param_2);
      goto LAB_140085d34;
    }
    if ((*(uint *)(param_1 + 1) >> 8 & 1) == 0) {
      iVar7 = func_0x000140421ed0(piVar12);
    }
    else {
      iVar7 = *piVar12;
      piVar12 = piVar12 + 1;
    }
    if ((uVar2 >> 8 & 1) == 0) {
      plVar10 = (longlong *)func_0x000140421ed0(puVar13);
    }
    else {
      plVar10 = (longlong *)(ulonglong)*puVar13;
      puVar13 = puVar13 + 1;
    }
    if (iVar7 == (int)plVar10) {
      if ((piVar12 == (int *)0x0) || (puVar13 == (uint *)0x0)) {
        func_0x0001402cba34(L"this_str && other_str",
                            L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x25d);
      }
      uVar9 = func_0x0001404210c0(piVar12,puVar13,iVar7);
      uVar8 = CONCAT71((int7)((ulonglong)uVar9 >> 8),(int)uVar9 == 0);
      goto LAB_140085d34;
    }
    break;
  case 5:
    uVar8 = (ulonglong)(*(char *)param_1 == *(char *)param_2);
    goto LAB_140085d34;
  case 6:
  case 7:
    plVar10 = (longlong *)((undefined8 *)*param_2)[1];
    if ((longlong *)((longlong *)*param_1)[1] != plVar10) break;
    plVar3 = *(longlong **)*param_1;
    plVar14 = (longlong *)*plVar3;
    plVar5 = (longlong *)**(longlong **)*param_2;
    while (plVar14 != plVar3) {
      plVar10 = (longlong *)FUN_140084e00(plVar14 + 4,plVar5 + 4);
      if (((char)plVar10 == '\0') ||
         (plVar10 = (longlong *)FUN_140085880(plVar14 + 6,plVar5 + 6), (char)plVar10 == '\0'))
      goto LAB_140085d32;
      plVar10 = (longlong *)plVar14[2];
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar10 + 0x19);
        plVar14 = plVar10;
        while (cVar1 == '\0') {
          plVar14 = (longlong *)*plVar14;
          cVar1 = *(char *)(*plVar14 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar14[1] + 0x19);
        plVar4 = (longlong *)plVar14[1];
        plVar10 = plVar14;
        while ((plVar14 = plVar4, cVar1 == '\0' && (plVar10 == (longlong *)plVar14[2]))) {
          cVar1 = *(char *)(plVar14[1] + 0x19);
          plVar4 = (longlong *)plVar14[1];
          plVar10 = plVar14;
        }
      }
      plVar4 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        plVar10 = (longlong *)*plVar4;
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
        while (plVar5 = plVar4, cVar1 == '\0') {
          plVar4 = (longlong *)*plVar4;
          plVar10 = (longlong *)*plVar4;
          cVar1 = *(char *)((longlong)plVar10 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar6 = (longlong *)plVar5[1];
        plVar4 = plVar5;
        while ((plVar10 = plVar6, plVar5 = plVar10, cVar1 == '\0' &&
               (plVar4 == (longlong *)plVar10[2]))) {
          cVar1 = *(char *)(plVar10[1] + 0x19);
          plVar6 = (longlong *)plVar10[1];
          plVar4 = plVar10;
        }
      }
    }
    goto switchD_140085b54_caseD_0;
  default:
    plVar10 = (longlong *)
              func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",
                                  0x266);
  }
LAB_140085d32:
  uVar8 = (ulonglong)plVar10 & 0xffffffffffffff00;
LAB_140085d34:
  return uVar8 ^ 1;
switchD_140085b54_caseD_0:
  uVar8 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
  goto LAB_140085d34;
}

