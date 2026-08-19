// Function: FUN_140085880
// Addr: 140085880
// Size: 431 bytes


bool FUN_140085880(double *param_1,double *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  longlong *plVar10;
  int *piVar11;
  longlong *plVar12;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar8 = *(uint *)(param_1 + 1) & 0xff;
  if (uVar8 == (uVar1 & 0xff)) {
    switch(uVar8) {
    case 0:
      return true;
    case 1:
    case 2:
      return *param_1 == *param_2;
    case 3:
      if (*param_1 == *param_2) {
        return true;
      }
      break;
    case 4:
      piVar9 = (int *)*param_1;
      if ((piVar9 == (int *)0x0) || (piVar11 = (int *)*param_2, piVar11 == (int *)0x0)) {
        return piVar9 == (int *)*param_2;
      }
      if ((*(uint *)(param_1 + 1) >> 8 & 1) == 0) {
        iVar6 = func_0x000140421ed0(piVar9);
      }
      else {
        iVar6 = *piVar9;
        piVar9 = piVar9 + 1;
      }
      if ((uVar1 >> 8 & 1) == 0) {
        iVar7 = func_0x000140421ed0(piVar11);
      }
      else {
        iVar7 = *piVar11;
        piVar11 = piVar11 + 1;
      }
      if (iVar6 == iVar7) {
        if ((piVar9 == (int *)0x0) || (piVar11 == (int *)0x0)) {
          func_0x0001402cba34(L"this_str && other_str",
                              L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x25d);
        }
        iVar6 = func_0x0001404210c0(piVar9,piVar11,iVar6);
        return iVar6 == 0;
      }
      break;
    case 5:
      return *(char *)param_1 == *(char *)param_2;
    case 6:
    case 7:
      if (((longlong *)*param_1)[1] == ((undefined8 *)*param_2)[1]) {
        plVar2 = *(longlong **)*param_1;
        plVar12 = (longlong *)*plVar2;
        plVar10 = (longlong *)**(undefined8 **)*param_2;
        if (plVar12 == plVar2) {
          return true;
        }
        while ((cVar5 = FUN_140084e00(plVar12 + 4,plVar10 + 4), cVar5 != '\0' &&
               (cVar5 = FUN_140085880(plVar12 + 6,plVar10 + 6), cVar5 != '\0'))) {
          plVar3 = (longlong *)plVar12[2];
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            cVar5 = *(char *)(*plVar3 + 0x19);
            plVar12 = plVar3;
            while (cVar5 == '\0') {
              plVar12 = (longlong *)*plVar12;
              cVar5 = *(char *)(*plVar12 + 0x19);
            }
          }
          else {
            cVar5 = *(char *)(plVar12[1] + 0x19);
            plVar4 = (longlong *)plVar12[1];
            plVar3 = plVar12;
            while ((plVar12 = plVar4, cVar5 == '\0' && (plVar3 == (longlong *)plVar12[2]))) {
              cVar5 = *(char *)(plVar12[1] + 0x19);
              plVar4 = (longlong *)plVar12[1];
              plVar3 = plVar12;
            }
          }
          plVar3 = (longlong *)plVar10[2];
          if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
            cVar5 = *(char *)(*plVar3 + 0x19);
            plVar10 = plVar3;
            while (cVar5 == '\0') {
              plVar10 = (longlong *)*plVar10;
              cVar5 = *(char *)(*plVar10 + 0x19);
            }
          }
          else {
            cVar5 = *(char *)(plVar10[1] + 0x19);
            plVar4 = (longlong *)plVar10[1];
            plVar3 = plVar10;
            while ((plVar10 = plVar4, cVar5 == '\0' && (plVar3 == (longlong *)plVar10[2]))) {
              cVar5 = *(char *)(plVar10[1] + 0x19);
              plVar4 = (longlong *)plVar10[1];
              plVar3 = plVar10;
            }
          }
          if (plVar12 == plVar2) {
            return true;
          }
        }
      }
      break;
    default:
      func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x266);
    }
  }
  return false;
}

