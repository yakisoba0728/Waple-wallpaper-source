// Function: FUN_1404ac18c
// Addr: 1404ac18c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac18c(undefined8 param_1,char *param_2)

{
  ushort in_AX;
  uint *puVar1;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined2 unaff_0000001a;
  undefined4 unaff_0000001c;
  
  *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) =
       *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) +
       unaff_BL;
  if (-1 < *(char *)CONCAT44(unaff_0000001c,CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)))) {
    *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar1 = (uint *)(ulonglong)
                   (CONCAT31((int3)(char)((in_AX ^ 0xca8) >> 8),(char)(in_AX ^ 0xca8) + '0') |
                   0xe882300);
  *puVar1 = *puVar1 & CONCAT22(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

