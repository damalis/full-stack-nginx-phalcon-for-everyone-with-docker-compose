
extern zend_class_entry *phalcon_html_helper_form_ce;

ZEPHIR_INIT_CLASS(Phalcon_Html_Helper_Form);

PHP_METHOD(Phalcon_Html_Helper_Form, __invoke);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_html_helper_form___invoke, 0, 0, IS_STRING, 0)
#if PHP_VERSION_ID >= 80000
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, attributes, IS_ARRAY, 0, "[]")
#else
	ZEND_ARG_ARRAY_INFO(0, attributes, 0)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_html_helper_form_method_entry) {
	PHP_ME(Phalcon_Html_Helper_Form, __invoke, arginfo_phalcon_html_helper_form___invoke, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
