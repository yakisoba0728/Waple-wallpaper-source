// Function: FUN_1404a7020
// Addr: 1404a7020
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a703c) overlaps instruction at (ram,0x0001404a703a)
    */

void FUN_1404a7020(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  int iVar4;
  undefined4 in_register_00000004;
  char cVar6;
  char unaff_SPL;
  int *unaff_RDI;
  undefined4 uVar3;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  cVar2 = in(9);
  uVar3 = CONCAT31(uVar5,cVar2);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,uVar3) + 0x6c);
  *pcVar1 = *pcVar1 + cVar6;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,uVar3) =
       *(char *)CONCAT44(in_register_00000004,uVar3) + cVar2;
  iVar4 = CONCAT31(uVar5,cVar2 * '\x02');
  if (param_1 != (char *)0x0) {
    *(char *)CONCAT44(in_register_00000004,iVar4) =
         *(char *)CONCAT44(in_register_00000004,iVar4) + cVar2 * '\x02';
    cVar2 = in(9);
    pcVar1 = (char *)(CONCAT44(in_register_00000004,CONCAT31(uVar5,cVar2)) + 0x6c);
    *pcVar1 = *pcVar1 + cVar6;
    *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

