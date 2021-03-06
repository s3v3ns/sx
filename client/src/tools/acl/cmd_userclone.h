/** @file cmd_userclone.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMD_USERCLONE_H
#define CMD_USERCLONE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef USERCLONE_CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define USERCLONE_CMDLINE_PARSER_PACKAGE "sxacl"
#endif

#ifndef USERCLONE_CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define USERCLONE_CMDLINE_PARSER_PACKAGE_NAME "sxacl"
#endif

#ifndef USERCLONE_CMDLINE_PARSER_VERSION
/** @brief the program version */
#define USERCLONE_CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct userclone_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * auth_file_arg;	/**< @brief Store authentication token in given file (instead of stdout).  */
  char * auth_file_orig;	/**< @brief Store authentication token in given file (instead of stdout) original value given at command line.  */
  const char *auth_file_help; /**< @brief Store authentication token in given file (instead of stdout) help description.  */
  char * description_arg;	/**< @brief Set the description of this clone (default='').  */
  char * description_orig;	/**< @brief Set the description of this clone original value given at command line.  */
  const char *description_help; /**< @brief Set the description of this clone help description.  */
  char * config_dir_arg;	/**< @brief Path to SX configuration directory.  */
  char * config_dir_orig;	/**< @brief Path to SX configuration directory original value given at command line.  */
  const char *config_dir_help; /**< @brief Path to SX configuration directory help description.  */
  char * force_key_arg;	/**< @brief Clone user with an old authentication token.  */
  char * force_key_orig;	/**< @brief Clone user with an old authentication token original value given at command line.  */
  const char *force_key_help; /**< @brief Clone user with an old authentication token help description.  */
  int batch_mode_flag;	/**< @brief Disable additional information and only print the authentication token (default=off).  */
  const char *batch_mode_help; /**< @brief Disable additional information and only print the authentication token help description.  */
  int debug_flag;	/**< @brief Enable debug messages (default=off).  */
  const char *debug_help; /**< @brief Enable debug messages help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int auth_file_given ;	/**< @brief Whether auth-file was given.  */
  unsigned int description_given ;	/**< @brief Whether description was given.  */
  unsigned int config_dir_given ;	/**< @brief Whether config-dir was given.  */
  unsigned int force_key_given ;	/**< @brief Whether force-key was given.  */
  unsigned int batch_mode_given ;	/**< @brief Whether batch-mode was given.  */
  unsigned int debug_given ;	/**< @brief Whether debug was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct userclone_cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure userclone_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure userclone_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *userclone_args_info_purpose;
/** @brief the usage string of the program */
extern const char *userclone_args_info_usage;
/** @brief the description string of the program */
extern const char *userclone_args_info_description;
/** @brief all the lines making the help output */
extern const char *userclone_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *userclone_args_info_full_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int userclone_cmdline_parser (int argc, char **argv,
  struct userclone_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use userclone_cmdline_parser_ext() instead
 */
int userclone_cmdline_parser2 (int argc, char **argv,
  struct userclone_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int userclone_cmdline_parser_ext (int argc, char **argv,
  struct userclone_args_info *args_info,
  struct userclone_cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int userclone_cmdline_parser_dump(FILE *outfile,
  struct userclone_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int userclone_cmdline_parser_file_save(const char *filename,
  struct userclone_args_info *args_info);

/**
 * Print the help
 */
void userclone_cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void userclone_cmdline_parser_print_full_help(void);
/**
 * Print the version
 */
void userclone_cmdline_parser_print_version(void);

/**
 * Initializes all the fields a userclone_cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void userclone_cmdline_parser_params_init(struct userclone_cmdline_parser_params *params);

/**
 * Allocates dynamically a userclone_cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized userclone_cmdline_parser_params structure
 */
struct userclone_cmdline_parser_params *userclone_cmdline_parser_params_create(void);

/**
 * Initializes the passed userclone_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void userclone_cmdline_parser_init (struct userclone_args_info *args_info);
/**
 * Deallocates the string fields of the userclone_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void userclone_cmdline_parser_free (struct userclone_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int userclone_cmdline_parser_required (struct userclone_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMD_USERCLONE_H */
