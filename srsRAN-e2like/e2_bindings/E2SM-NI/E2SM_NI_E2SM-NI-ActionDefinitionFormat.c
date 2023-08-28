/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-NI-IEs"
 * 	found in "/local/mnt/openairinterface5g/openair2/RIC_AGENT/MESSAGES/ASN1/R01/e2sm-ni-v01.00.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -fincludes-quoted -D /local/mnt/openairinterface5g/cmake_targets/ran_build/build/CMakeFiles/E2SM-NI/`
 */

#include "E2SM_NI_E2SM-NI-ActionDefinitionFormat.h"

asn_per_constraints_t asn_PER_type_E2SM_NI_E2SM_NI_ActionDefinitionFormat_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_E2SM_NI_E2SM_NI_ActionDefinitionFormat_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_NI_E2SM_NI_ActionDefinitionFormat, choice.actionDefinition_Format1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_NI_E2SM_NI_ActionDefinition_Format1,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"actionDefinition-Format1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_NI_E2SM_NI_ActionDefinitionFormat, choice.actionDefinition_Format2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E2SM_NI_E2SM_NI_ActionDefinition_Format2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"actionDefinition-Format2"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_NI_E2SM_NI_ActionDefinitionFormat_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* actionDefinition-Format1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* actionDefinition-Format2 */
};
asn_CHOICE_specifics_t asn_SPC_E2SM_NI_E2SM_NI_ActionDefinitionFormat_specs_1 = {
	sizeof(struct E2SM_NI_E2SM_NI_ActionDefinitionFormat),
	offsetof(struct E2SM_NI_E2SM_NI_ActionDefinitionFormat, _asn_ctx),
	offsetof(struct E2SM_NI_E2SM_NI_ActionDefinitionFormat, present),
	sizeof(((struct E2SM_NI_E2SM_NI_ActionDefinitionFormat *)0)->present),
	asn_MAP_E2SM_NI_E2SM_NI_ActionDefinitionFormat_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_NI_E2SM_NI_ActionDefinitionFormat = {
	"E2SM-NI-ActionDefinitionFormat",
	"E2SM-NI-ActionDefinitionFormat",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_E2SM_NI_E2SM_NI_ActionDefinitionFormat_constr_1, CHOICE_constraint },
	asn_MBR_E2SM_NI_E2SM_NI_ActionDefinitionFormat_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_NI_E2SM_NI_ActionDefinitionFormat_specs_1	/* Additional specs */
};
