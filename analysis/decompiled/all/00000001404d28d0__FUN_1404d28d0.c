// Function: FUN_1404d28d0
// Addr: 1404d28d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d28d0(byte *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  char in_AL;
  char cVar4;
  byte bVar5;
  undefined7 in_register_00000001;
  byte unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  uint unaff_EDI;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  cVar4 = in_AL * '\x02';
  uRam000000017d7eefdf = uRam000000017d7eefdf ^ unaff_EDI;
  pcVar3 = (char *)(CONCAT71(in_register_00000001,cVar4) + 0x4a +
                   CONCAT71(in_register_00000001,cVar4) * 2);
  *pcVar3 = *pcVar3 + unaff_BL;
  bVar5 = *param_1;
  *param_1 = *param_1 + unaff_BL;
  cVar4 = (cVar4 - *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))) -
          CARRY1(bVar5,unaff_BL);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  piVar1 = (int *)(CONCAT71(in_register_00000001,cVar4) + CONCAT71(in_register_00000001,cVar4));
  *piVar1 = *piVar1 + (int)param_2;
  bVar5 = cVar4 + 0x30;
  *(byte *)CONCAT71(in_register_00000001,bVar5) =
       *(char *)CONCAT71(in_register_00000001,bVar5) + bVar5;
  bVar5 = bVar5 & (byte)param_2;
  *(char *)CONCAT71(in_register_00000001,bVar5) =
       *(char *)CONCAT71(in_register_00000001,bVar5) + (char)param_1;
  *(byte *)CONCAT71(in_register_00000001,bVar5) =
       *(char *)CONCAT71(in_register_00000001,bVar5) + bVar5;
  puVar2 = (uint *)(CONCAT71(in_register_00000001,bVar5) + param_2);
  *puVar2 = *puVar2 & unaff_EDI;
  pcVar3 = (char *)(CONCAT71(in_register_00000001,bVar5) + unaff_RBP * 2);
  *pcVar3 = *pcVar3 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

