// Function: FUN_1404a8350
// Addr: 1404a8350
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8350(longlong param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint *in_RAX;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined2 in_ES;
  char in_ZF;
  
  pcVar7 = (char *)(param_1 + -1);
  if (pcVar7 == (char *)0x0 || in_ZF != '\0') {
    uVar4 = (uint)in_RAX | *in_RAX;
    *pcVar7 = -*pcVar7;
    *pcVar7 = *pcVar7 + ((byte)uVar4 | (byte)*(undefined4 *)(ulonglong)uVar4) + 0x82;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)in_RAX = (char)*in_RAX + (char)pcVar7;
  puVar5 = (uint *)((ulonglong)in_RAX ^ 0x15);
  *(char *)(puVar5 + 8) = (char)puVar5[8] + (char)((ulonglong)param_2 >> 8);
  uVar4 = (uint)puVar5 | *puVar5;
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  *(undefined2 *)(param_2 + 0x2921004a) = in_ES;
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  uVar4 = CONCAT31(uVar1,(bVar2 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar2)) - (char)(uVar4 >> 8));
  uVar4 = (uVar4 | *(uint *)(ulonglong)uVar4) + 0xd000c74;
  pcVar6 = (char *)(ulonglong)(uVar4 | 0xe540500);
  cVar3 = (char)uVar4;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar3;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(uint *)CONCAT71(unaff_00000019,unaff_BL) & (uint)pcVar7;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)pcVar7;
  *(uint *)CONCAT71(unaff_00000019,unaff_BL) =
       *(uint *)CONCAT71(unaff_00000019,unaff_BL) & (uint)pcVar7;
  pcVar6[0x21004a82] = pcVar6[0x21004a82] + unaff_BL;
  *param_2 = *param_2 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

