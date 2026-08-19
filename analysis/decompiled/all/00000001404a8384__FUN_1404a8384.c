// Function: FUN_1404a8384
// Addr: 1404a8384
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8384(uint param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 in_RAX;
  uint *puVar3;
  char *pcVar4;
  char unaff_BL;
  undefined7 unaff_00000019;
  char in_CF;
  
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                            ((char)in_RAX - (char)((ulonglong)in_RAX >> 8)) - in_CF);
  uVar1 = ((uint)puVar3 | *puVar3) + 0xd000c74;
  pcVar4 = (char *)(ulonglong)(uVar1 | 0xe540500);
  cVar2 = (char)uVar1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar2;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & param_1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & param_1;
  pcVar4[0x21004a82] = pcVar4[0x21004a82] + unaff_BL;
  *param_2 = *param_2 + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

