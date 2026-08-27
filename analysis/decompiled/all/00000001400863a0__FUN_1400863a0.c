// Function: FUN_1400863a0
// Addr: 1400863a0
// Size: 213 bytes


int FUN_1400863a0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  switch(*(uint *)(param_1 + 1) & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    break;
  case 6:
    if (((longlong *)*param_1)[1] != 0) {
      plVar2 = *(longlong **)*param_1;
      if (*(char *)((longlong)plVar2 + 0x19) != '\0') {
        return *(int *)(plVar2[2] + 0x28) + 1;
      }
      plVar3 = (longlong *)*plVar2;
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar3[2] + 0x19);
        while (cVar1 == '\0') {
          plVar3 = (longlong *)plVar3[2];
          cVar1 = *(char *)(plVar3[2] + 0x19);
        }
      }
      else {
        cVar1 = *(char *)(plVar2[1] + 0x19);
        plVar3 = plVar2;
        plVar2 = (longlong *)plVar2[1];
        while ((cVar1 == '\0' && (plVar3 == (longlong *)*plVar2))) {
          cVar1 = *(char *)(plVar2[1] + 0x19);
          plVar3 = plVar2;
          plVar2 = (longlong *)plVar2[1];
        }
        if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
          return (int)plVar2[5] + 1;
        }
      }
      return (int)plVar3[5] + 1;
    }
    break;
  case 7:
    return *(int *)(*param_1 + 8);
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x3a1);
  }
  return 0;
}

