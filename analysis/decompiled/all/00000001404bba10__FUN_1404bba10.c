// Function: FUN_1404bba10
// Addr: 1404bba10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bba10(undefined8 param_1,char param_2)

{
  uint *in_RAX;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  
  *in_RAX = *in_RAX & unaff_ESP;
  *(char *)CONCAT44(unaff_00000024,unaff_ESP) =
       *(char *)CONCAT44(unaff_00000024,unaff_ESP) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

