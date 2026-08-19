// Function: FUN_1404b6aa4
// Addr: 1404b6aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6ab9) overlaps instruction at (ram,0x0001404b6ab8)
    */

void FUN_1404b6aa4(longlong param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  int iVar7;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  uint unaff_ESI;
  char in_CF;
  byte bVar8;
  char *pcVar4;
  
  cVar5 = (char)((ulonglong)in_RAX >> 8) * '\x02' + in_CF;
  LocalDescriptorTableRegister((short)*param_2);
  uVar3 = (uint)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar5,(char)in_RAX));
  if (cVar5 == '\0') {
    *param_4 = *param_4;
    uVar3 = uVar3 + 0x64050002;
    uVar2 = uVar3 | 0x1ba3f900;
    *(byte *)((longlong)param_2 + -0x1fffe45b) =
         *(byte *)((longlong)param_2 + -0x1fffe45b) + (char)uVar3;
    uVar6 = (ulonglong)(uint)(*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 0x21);
    bVar8 = 1;
  }
  else {
    *(byte *)param_2 = (byte)*param_2 + (char)param_2;
    iVar7 = (int)param_2;
    param_2 = (uint *)(ulonglong)(uVar3 | *(uint *)(((ulonglong)param_2 & 0xffffffff) + 0x21));
    uVar2 = iVar7 + 0x34050002;
    bVar8 = 0;
    uVar6 = param_1 - 1;
    if (uVar6 != 0 && (char)uVar2 != '\0') {
      cRam00000001454b6fcd = cRam00000001454b6fcd + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uRam0521004b69d0001b = (uVar2 - *(int *)(ulonglong)uVar2) - (uint)bVar8;
  uVar3 = CONCAT31((int3)(uRam0521004b69d0001b >> 8),
                   (char)uRam0521004b69d0001b + *(char *)(ulonglong)uRam0521004b69d0001b) +
          0xf9000d64;
  pcVar4 = (char *)(ulonglong)uVar3;
  *param_4 = *param_4;
  cVar5 = (char)uVar3;
  *pcVar4 = *pcVar4 + cVar5;
  uRam69e0001ba582001b = uVar3;
  *param_4 = *param_4;
  *pcVar4 = *pcVar4 + cVar5;
  uVar1 = (undefined3)(uVar3 >> 8);
  cVar5 = cVar5 + (char)(uVar3 >> 8);
  uRam69d0001ba3f9001b = CONCAT31(uVar1,cVar5);
  *param_4 = *param_4 + cVar5;
  *(byte *)param_2 = (byte)*param_2 + (char)uVar6 + unaff_BH;
  uVar3 = (CONCAT31(uVar1,cVar5) | 5) + 0x3600470;
  *(byte *)param_2 = (byte)*param_2 ^ (byte)uVar3;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (byte)uVar3;
  *param_2 = *param_2 & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

