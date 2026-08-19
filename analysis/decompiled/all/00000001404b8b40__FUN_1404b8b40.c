// Function: FUN_1404b8b40
// Addr: 1404b8b40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b8b4d) overlaps instruction at (ram,0x0001404b8b49)
    */

void FUN_1404b8b40(int *param_1,int param_2)

{
  byte bVar1;
  int *in_RAX;
  byte unaff_BL;
  undefined4 unaff_ESI;
  undefined4 unaff_00000034;
  
  *(int *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(int *)CONCAT44(unaff_00000034,unaff_ESI) + (int)&stack0x00000000;
  if (-1 < (char)in_RAX) {
    bVar1 = *(byte *)CONCAT44(unaff_00000034,unaff_ESI);
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + unaff_BL;
    *in_RAX = *in_RAX + (int)in_RAX + (uint)CARRY1(bVar1,unaff_BL);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + param_2;
  *(char *)param_1 = (char)*param_1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

