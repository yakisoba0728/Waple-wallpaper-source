// Function: FUN_140085a30
// Addr: 140085a30
// Size: 587 bytes


ulonglong FUN_140085a30(double *param_1,double *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  size_t sVar9;
  undefined4 extraout_var;
  longlong *plVar10;
  longlong *extraout_RAX;
  uint uVar11;
  uint *_Str;
  uint *_Str_00;
  longlong *plVar12;
  
  uVar2 = *(uint *)(param_2 + 1);
  uVar11 = *(uint *)(param_1 + 1) & 0xff;
  plVar10 = (longlong *)0x0;
  if (uVar11 != (uVar2 & 0xff)) {
    return 1;
  }
  switch(uVar11) {
  case 0:
    goto switchD_140085a84_caseD_0;
  case 1:
  case 2:
    uVar8 = CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 == *param_2);
    goto LAB_140085c64;
  case 3:
    if (*param_1 == *param_2) {
      uVar8 = 1;
      goto LAB_140085c64;
    }
    break;
  case 4:
    _Str = (uint *)*param_1;
    if ((_Str == (uint *)0x0) || (_Str_00 = (uint *)*param_2, _Str_00 == (uint *)0x0)) {
      uVar8 = (ulonglong)(_Str == (uint *)*param_2);
      goto LAB_140085c64;
    }
    if ((*(uint *)(param_1 + 1) >> 8 & 1) == 0) {
      sVar9 = strlen((char *)_Str);
      uVar11 = (uint)sVar9;
    }
    else {
      uVar11 = *_Str;
      _Str = _Str + 1;
    }
    if ((uVar2 >> 8 & 1) == 0) {
      plVar10 = (longlong *)strlen((char *)_Str_00);
    }
    else {
      plVar10 = (longlong *)(ulonglong)*_Str_00;
      _Str_00 = _Str_00 + 1;
    }
    if (uVar11 == (uint)plVar10) {
      if ((_Str == (uint *)0x0) || (_Str_00 == (uint *)0x0)) {
        FID_conflict__assert
                  (L"this_str && other_str",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",
                   0x25d);
      }
      iVar7 = memcmp(_Str,_Str_00,(ulonglong)uVar11);
      uVar8 = CONCAT71((int7)(CONCAT44(extraout_var,iVar7) >> 8),iVar7 == 0);
      goto LAB_140085c64;
    }
    break;
  case 5:
    uVar8 = (ulonglong)(*(char *)param_1 == *(char *)param_2);
    goto LAB_140085c64;
  case 6:
  case 7:
    plVar10 = (longlong *)((undefined8 *)*param_2)[1];
    if ((longlong *)((longlong *)*param_1)[1] != plVar10) break;
    plVar3 = *(longlong **)*param_1;
    plVar12 = (longlong *)*plVar3;
    plVar5 = (longlong *)**(longlong **)*param_2;
    while (plVar12 != plVar3) {
      plVar10 = (longlong *)FUN_140084d30(plVar12 + 4,plVar5 + 4);
      if (((char)plVar10 == '\0') ||
         (plVar10 = (longlong *)FUN_1400857b0(plVar12 + 6,plVar5 + 6), (char)plVar10 == '\0'))
      goto LAB_140085c62;
      plVar10 = (longlong *)plVar12[2];
      if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar10 + 0x19);
        plVar12 = plVar10;
        while (cVar1 == '\0') {
          plVar12 = (longlong *)*plVar12;
          cVar1 = *(char *)(*plVar12 + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar12[1] + 0x19);
        plVar4 = (longlong *)plVar12[1];
        plVar10 = plVar12;
        while ((plVar12 = plVar4, cVar1 == '\0' && (plVar10 == (longlong *)plVar12[2]))) {
          cVar1 = *(char *)(plVar12[1] + 0x19);
          plVar4 = (longlong *)plVar12[1];
          plVar10 = plVar12;
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
    goto switchD_140085a84_caseD_0;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x266);
    plVar10 = extraout_RAX;
  }
LAB_140085c62:
  uVar8 = (ulonglong)plVar10 & 0xffffffffffffff00;
LAB_140085c64:
  return uVar8 ^ 1;
switchD_140085a84_caseD_0:
  uVar8 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
  goto LAB_140085c64;
}

