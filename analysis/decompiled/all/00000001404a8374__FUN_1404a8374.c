// Function: FUN_1404a8374
// Addr: 1404a8374
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8374(uint param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  char *pcVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined2 in_ES;
  
  uVar4 = (uint)in_RAX | *in_RAX;
  *(undefined2 *)(param_2 + 0x2921004a) = in_ES;
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  uVar4 = CONCAT31(uVar1,(bVar2 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2)) - (char)(uVar4 >> 8));
  uVar4 = (uVar4 | *(uint *)(ulonglong)uVar4) + 0xd000c74;
  pcVar5 = (char *)(ulonglong)(uVar4 | 0xe540500);
  cVar3 = (char)uVar4;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & param_1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)param_1;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) = *(uint *)CONCAT71(unaff_00000019,unaff_BL) & param_1;
  pcVar5[0x21004a82] = pcVar5[0x21004a82] + unaff_BL;
  *param_2 = *param_2 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

