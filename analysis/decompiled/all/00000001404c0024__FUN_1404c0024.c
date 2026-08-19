// Function: FUN_1404c0024
// Addr: 1404c0024
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0024(void)

{
  byte in_AL;
  char cVar1;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       unaff_BL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & in_AL;
  cVar1 = in_AL + 0x50;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       + cVar1;
  uRam00000000e8510044 = uRam00000000e8510044 & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

