// Function: FUN_1404a8364
// Addr: 1404a8364
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8364(uint param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  char *pcVar6;
  char unaff_BL;
  undefined7 unaff_00000019;
  byte in_CF;
  uint *puVar5;
  
  uVar4 = in_EAX + (int)param_2 + (uint)in_CF;
  puVar5 = (uint *)(ulonglong)uVar4;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar4;
  *puVar5 = *puVar5 & param_1;
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (char)uVar4 + (char)*puVar5;
  param_2[0xb207000] = param_2[0xb207000] | (byte)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar2;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & param_1;
  param_2[(longlong)(ulonglong)CONCAT31(uVar1,bVar2) * 4 + 0x2921004a] =
       param_2[(longlong)(ulonglong)CONCAT31(uVar1,bVar2) * 4 + 0x2921004a] + (char)param_1;
  bVar2 = bVar2 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2);
  uVar4 = CONCAT31(uVar1,(bVar2 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2)) - (char)(uVar4 >> 8));
  uVar4 = (uVar4 | *(uint *)(ulonglong)uVar4) + 0xd000c74;
  pcVar6 = (char *)(ulonglong)(uVar4 | 0xe540500);
  cVar3 = (char)uVar4;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & param_1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & param_1;
  pcVar6[0x21004a82] = pcVar6[0x21004a82] + unaff_BL;
  *param_2 = *param_2 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

