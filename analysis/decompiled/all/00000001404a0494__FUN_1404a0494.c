// Function: FUN_1404a0494
// Addr: 1404a0494
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0494(char *param_1,char param_2)

{
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) = (char)in_RAX;
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + param_2;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) ^ (uint)in_RAX;
  *param_1 = *param_1 + unaff_BH;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) ^ (uint)in_RAX;
  in_RAX[0x21004a03] = in_RAX[0x21004a03] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

