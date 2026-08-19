// Function: FUN_1404bc8ac
// Addr: 1404bc8ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc8ac(char *param_1,char *param_2)

{
  uint uVar1;
  char cVar4;
  undefined8 in_RAX;
  undefined6 uVar5;
  char *pcVar2;
  char cVar6;
  uint *unaff_RBX;
  int unaff_ESP;
  longlong unaff_RSI;
  int *piVar3;
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  *param_2 = *param_2 + '\x01';
  uVar5 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar4 = (char)((ulonglong)in_RAX >> 8) + cVar6;
  pcVar2 = (char *)CONCAT71(CONCAT61(uVar5,cVar4),0x4a);
  *param_1 = *param_1 + cVar4;
  *pcVar2 = *pcVar2 + 'J';
  pcVar2[0x260022fd] = pcVar2[0x260022fd] + (char)param_2;
  *param_2 = *param_2 + '\x01';
  *param_1 = *param_1 + 'J';
  uVar1 = (uint)CONCAT71(CONCAT61(uVar5,cVar4 + cVar6),0x4a) | *unaff_RBX;
  piVar3 = (int *)(ulonglong)uVar1;
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
  *piVar3 = *piVar3 + unaff_ESP;
  cVar4 = (char)uVar1;
  *(char *)((longlong)piVar3 + unaff_RSI) = *(char *)((longlong)piVar3 + unaff_RSI) + cVar4;
  *(char *)piVar3 = (char)*piVar3 + cVar4;
  *unaff_RBX = *unaff_RBX & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

