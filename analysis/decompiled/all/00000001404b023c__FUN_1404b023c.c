// Function: FUN_1404b023c
// Addr: 1404b023c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b023c(longlong param_1,uint *param_2)

{
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  
  *(longlong *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(longlong *)CONCAT44(unaff_0000001c,unaff_EBX) + param_1;
  *param_2 = *param_2 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

