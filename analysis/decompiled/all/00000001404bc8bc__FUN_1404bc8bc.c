// Function: FUN_1404bc8bc
// Addr: 1404bc8bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc8bc(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 in_RAX;
  uint *unaff_RBX;
  int unaff_ESP;
  longlong unaff_RSI;
  int *piVar3;
  
  *param_2 = *param_2 + '\x01';
  *param_1 = *param_1 + 'J';
  uVar2 = (uint)CONCAT71(CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                                  (char)((ulonglong)in_RAX >> 8) + (char)((ulonglong)param_1 >> 8)),
                         0x4a) | *unaff_RBX;
  piVar3 = (int *)(ulonglong)uVar2;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
  *piVar3 = *piVar3 + unaff_ESP;
  cVar1 = (char)uVar2;
  *(char *)((longlong)piVar3 + unaff_RSI) = *(char *)((longlong)piVar3 + unaff_RSI) + cVar1;
  *(char *)piVar3 = (char)*piVar3 + cVar1;
  *unaff_RBX = *unaff_RBX & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

