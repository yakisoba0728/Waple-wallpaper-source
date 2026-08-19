// Function: FUN_1404b8b30
// Addr: 1404b8b30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8b4d) overlaps instruction at (ram,0x0001404b8b49)
    */

void FUN_1404b8b30(int *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 in_RAX;
  int *piVar3;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  
  *(char *)(param_2 + unaff_RBP) = *(char *)(param_2 + unaff_RBP) + (char)param_2;
  cVar2 = cRam94001e8aeb001e8a;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = (int)param_1;
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + (int)&stack0x00000000;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2);
  if (-1 < cVar2) {
    bVar1 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_BL;
    *piVar3 = *piVar3 + (int)piVar3 + (uint)CARRY1(bVar1,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (int)param_2;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

