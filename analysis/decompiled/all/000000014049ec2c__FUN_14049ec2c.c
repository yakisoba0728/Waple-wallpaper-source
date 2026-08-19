// Function: FUN_14049ec2c
// Addr: 14049ec2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ec2c(char param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  char unaff_SPL;
  char in_CF;
  
  cVar1 = (in_AL + '\x15') - in_CF;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + param_1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  cVar1 = in(4);
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

