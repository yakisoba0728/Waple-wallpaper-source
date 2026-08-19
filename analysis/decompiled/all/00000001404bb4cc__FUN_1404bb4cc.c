// Function: FUN_1404bb4cc
// Addr: 1404bb4cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404bb4f1) */

void FUN_1404bb4cc(undefined8 param_1,int *param_2)

{
  ulonglong in_RAX;
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined6 uVar4;
  char *unaff_RDI;
  
  uVar4 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar2 = (char)param_1;
  cVar3 = (char)((ulonglong)param_1 >> 8) - *(char *)(in_RAX + 8);
  *unaff_RDI = *unaff_RDI + cVar2;
  pcVar1 = (char *)(in_RAX ^ 0x14);
  *unaff_RDI = *unaff_RDI + cVar2;
  *param_2 = *param_2 + (int)param_2;
  *pcVar1 = *pcVar1 + cVar2;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,cVar2)) + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

