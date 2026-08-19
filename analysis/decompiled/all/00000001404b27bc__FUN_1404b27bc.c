// Function: FUN_1404b27bc
// Addr: 1404b27bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b27bc(char param_1,undefined8 param_2,char param_3,byte *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char in_AL;
  byte bVar5;
  char cVar6;
  undefined7 in_register_00000001;
  char unaff_BL;
  char cVar7;
  undefined7 unaff_00000019;
  byte unaff_SPL;
  char in_CF;
  
  bVar5 = in_AL + '\x17' + in_CF;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x47ffe8ec);
  *pcVar1 = *pcVar1 + bVar5;
  bVar3 = *param_4;
  *param_4 = *param_4 + unaff_SPL;
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,bVar5) + CONCAT71(in_register_00000001,bVar5));
  bVar4 = bVar5 + *pbVar2;
  cVar6 = bVar4 + CARRY1(bVar3,unaff_SPL);
  cVar7 = unaff_BL + *(char *)(CONCAT71(in_register_00000001,cVar6) + -0x77f6ffb5) +
          (CARRY1(bVar5,*pbVar2) || CARRY1(bVar4,CARRY1(bVar3,unaff_SPL)));
  pcVar1 = (char *)(CONCAT71(unaff_00000019,cVar7) + 0x48001714);
  *pcVar1 = *pcVar1 + param_3;
  cVar6 = cVar6 + param_1;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,cVar6) =
       *(char *)CONCAT71(in_register_00000001,cVar6) + cVar6;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,cVar7) + 0x48001714);
  *pcVar1 = *pcVar1 + cVar6;
  cVar6 = cVar6 + param_1;
  *param_4 = *param_4 + unaff_SPL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar6) + CONCAT71(in_register_00000001,cVar6));
  *pcVar1 = *pcVar1 + cVar6;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar6) + -0x77ffffb5);
  *pcVar1 = *pcVar1 + cVar7;
  pcVar1 = (char *)(CONCAT71(unaff_00000019,cVar7) + 0x48001714);
  *pcVar1 = *pcVar1 + param_3;
  cVar6 = cVar6 + param_1;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,cVar6) =
       *(char *)CONCAT71(in_register_00000001,cVar6) + cVar6;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar6) + 0x14);
  *pcVar1 = *pcVar1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

