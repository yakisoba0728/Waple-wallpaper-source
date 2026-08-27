// Function: FUN_1400857b0
// Addr: 1400857b0
// Size: 596 bytes


ulonglong FUN_1400857b0(double *param_1,double *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  size_t sVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong extraout_RAX;
  uint uVar10;
  uint *_Str;
  longlong *plVar11;
  uint *_Str_00;
  longlong *plVar12;
  
  uVar2 = *(uint *)(param_2 + 1);
  uVar10 = *(uint *)(param_1 + 1) & 0xff;
  uVar8 = 0;
  if (uVar10 == (uVar2 & 0xff)) {
    switch(uVar10) {
    case 0:
switchD_1400857ee_caseD_0:
      return CONCAT71((int7)(uVar8 >> 8),1);
    case 1:
    case 2:
      return CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 == *param_2);
    case 3:
      if (*param_1 == *param_2) {
        return 1;
      }
      break;
    case 4:
      _Str = (uint *)*param_1;
      if ((_Str == (uint *)0x0) || (_Str_00 = (uint *)*param_2, _Str_00 == (uint *)0x0)) {
        return (ulonglong)(_Str == (uint *)*param_2);
      }
      if ((*(uint *)(param_1 + 1) >> 8 & 1) == 0) {
        sVar7 = strlen((char *)_Str);
        uVar10 = (uint)sVar7;
      }
      else {
        uVar10 = *_Str;
        _Str = _Str + 1;
      }
      if ((uVar2 >> 8 & 1) == 0) {
        uVar8 = strlen((char *)_Str_00);
      }
      else {
        uVar8 = (ulonglong)*_Str_00;
        _Str_00 = _Str_00 + 1;
      }
      if (uVar10 == (uint)uVar8) {
        if ((_Str == (uint *)0x0) || (_Str_00 == (uint *)0x0)) {
          FID_conflict__assert
                    (L"this_str && other_str",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x25d);
        }
        iVar6 = memcmp(_Str,_Str_00,(ulonglong)uVar10);
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar6) >> 8),iVar6 == 0);
      }
      break;
    case 5:
      return (ulonglong)(*(char *)param_1 == *(char *)param_2);
    case 6:
    case 7:
      uVar8 = ((undefined8 *)*param_2)[1];
      if (((longlong *)*param_1)[1] == uVar8) {
        plVar3 = *(longlong **)*param_1;
        plVar12 = (longlong *)*plVar3;
        plVar11 = (longlong *)**(undefined8 **)*param_2;
        if (plVar12 == plVar3) goto switchD_1400857ee_caseD_0;
        while ((uVar8 = FUN_140084d30(plVar12 + 4,plVar11 + 4), (char)uVar8 != '\0' &&
               (uVar8 = FUN_1400857b0(plVar12 + 6,plVar11 + 6), (char)uVar8 != '\0'))) {
          plVar4 = (longlong *)plVar12[2];
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar4 + 0x19);
            plVar12 = plVar4;
            while (cVar1 == '\0') {
              plVar12 = (longlong *)*plVar12;
              cVar1 = *(char *)(*plVar12 + 0x19);
            }
          }
          else {
            cVar1 = *(char *)(plVar12[1] + 0x19);
            plVar9 = (longlong *)plVar12[1];
            plVar4 = plVar12;
            while ((plVar12 = plVar9, cVar1 == '\0' && (plVar4 == (longlong *)plVar12[2]))) {
              cVar1 = *(char *)(plVar12[1] + 0x19);
              plVar9 = (longlong *)plVar12[1];
              plVar4 = plVar12;
            }
          }
          plVar4 = (longlong *)plVar11[2];
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            plVar9 = (longlong *)*plVar4;
            cVar1 = *(char *)((longlong)plVar9 + 0x19);
            while (plVar11 = plVar4, cVar1 == '\0') {
              plVar4 = (longlong *)*plVar4;
              plVar9 = (longlong *)*plVar4;
              cVar1 = *(char *)((longlong)plVar9 + 0x19);
            }
          }
          else {
            cVar1 = *(char *)(plVar11[1] + 0x19);
            plVar5 = (longlong *)plVar11[1];
            plVar4 = plVar11;
            while ((plVar9 = plVar5, plVar11 = plVar9, cVar1 == '\0' &&
                   (plVar4 == (longlong *)plVar9[2]))) {
              cVar1 = *(char *)(plVar9[1] + 0x19);
              plVar5 = (longlong *)plVar9[1];
              plVar4 = plVar9;
            }
          }
          if (plVar12 == plVar3) {
            return CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
          }
        }
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x266);
      uVar8 = extraout_RAX;
    }
  }
  return uVar8 & 0xffffffffffffff00;
}

